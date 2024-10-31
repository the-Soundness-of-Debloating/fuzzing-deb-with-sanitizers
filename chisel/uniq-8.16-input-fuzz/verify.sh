#/bin/bash
home_folder=$(pwd)
program_name=uniq-8.16
program_type=("origin" "reduced")
sanitizers=("nosan" "asan" "ubsan" "msan" "tsan" "lsan")
fuzzers=("afl" "radamsa" "symcc")
selected_fuzzer=$1
sanitizer_type=$2
save_crashes=$3
save_dir=$4
specified_num=$5
start_num=0
end_num=7

ulimit -c unlimited

if [ $# -lt 2 ] 
then 
  echo "Usage: bash -x $0 [selected_fuzzer] [sanitizer_type] [save_crashes*] [save_dir*]"
  echo "Example: bash -x $0 afl nosan"
  echo "Available fuzzers: ${fuzzers[@]}"
  echo "Available sanitizers: ${sanitizers[@]}"
  exit 1
elif [ $# -eq 3 ]
then 
  echo "Please specify save_dir."
  echo "Example: bash -x $0 afl nosan save ./crash_inputs"
  exit 1
fi

legal_san=0
for san in ${sanitizers[@]}; do
  if [ ${sanitizer_type} = ${san} ]
  then 
    legal_san=1
    break
  fi
done

if [ ${legal_san} = 0 ];
then 
  echo -e "Error: Wrong sanitizer! Please choose from following types: ${sanitizers[@]}"
  exit 1
fi

legal_fuzzer=0
for fuzzer in ${fuzzers[@]}; do
  if [ ${selected_fuzzer} = ${fuzzer} ]
  then 
    legal_fuzzer=1
    break
  fi
done
if [ ${legal_fuzzer} = 0 ];
then 
  echo -e "Error: Wrong fuzzer! Please choose from following types: ${fuzzers[@]}"
  exit 1
fi

if [ ! -z $specified_num ]
then 
  start_num=$specified_num
  end_num=$specified_num
fi
# compile and make result dir
for test_type in ${program_type[@]}; do
  bin=${home_folder}/bins/$test_type.$sanitizer_type.out
  source ./compile.sh radamsa $sanitizer_type $bin  # use clang to compile in all verification process.

  if [ ! -f $bin ]
  then 
    echo "Fail to compile."
    exit 1
  fi

  case $selected_fuzzer in
   afl | symcc)
      fuzzed_input_dir=${home_folder}/result/${selected_fuzzer}_result/reduced
      result_dir=${home_folder}/result/${selected_fuzzer}_result/analysis/${test_type}/$sanitizer_type
      calc_dir=${home_folder}/result/${selected_fuzzer}_result/analysis/calc
      ;;
    radamsa)
      fuzzed_input_dir=${home_folder}/input/radamsa_fuzzed
      result_dir=${home_folder}/result/radamsa_result/${test_type}/$sanitizer_type
      calc_dir=${home_folder}/result/radamsa_result/calc
      ;;
  esac
  if [ -d $result_dir ];
  then 
    rm -rf $result_dir/*
  else 
    mkdir -p $result_dir
  fi
  if [ ! -d $calc_dir ]
  then 
    mkdir -p $calc_dir
  fi
done

if [ ! -d ${fuzzed_input_dir}_copy ];
then
  cp -r ${fuzzed_input_dir} ${fuzzed_input_dir}_copy
fi

crash_loc=""

function run () {
  test_type=$1
  echo $test_type

  case $selected_fuzzer in
    afl | symcc)
      result_dir=${home_folder}/result/${selected_fuzzer}_result/analysis/${test_type}/$sanitizer_type
      ;;
    radamsa)
      result_dir=${home_folder}/result/radamsa_result/${test_type}/$sanitizer_type
      ;;
  esac
  result_file=$result_dir/input_${seed_num}
  bin=${home_folder}/bins/$test_type.$sanitizer_type.out
  find_crash=0
  if [ -f core* ];
  then 
    rm core* 
  fi
  if [ -f tmp ];
  then
    rm tmp
  fi

  case ${seed_num} in 
    0) # file
      option=""
      ;;    
    1) # -c file
      option="-c"
      ;;   
    2) # -d file
      option="-d"
      ;;   
    3) # -u file
      option="-u"
      ;;   
    4) # -i file
      option="-i"
      ;;   
    5) # -f 5 file
      option="-f 5"
      ;;
    6) # -s 10 file
      option="-s 10"
      ;;
    7) # -w 10 file
      option="-w 10"
      ;;
  esac

  run_script="$option $input"
  run_command=" { timeout -k 0.5 0.5 ${bin} $option $input; } >/dev/null "

  retcode=0

  if [ $sanitizer_type == "nosan" ];
  then # for nosan
    eval "${run_command}"
    retcode=$?
    if [ -f core* ];
    then 
      mv core* core
      gdb $bin core -ex "bt -30" -ex q > tmp
      find_crash=1
    fi
  else # for sans
    eval "${run_command} 2> tmp"
    retcode=$?
  fi
  if echo $retcode | grep -q 13[0-9] && [ ! -s tmp ] # empty tmp file 
  then 
    timeout -k 5 5 gdb $bin -ex 'set confirm off' -ex "r $run_script" -ex bt -ex q > tmp
  fi
  if [ -f tmp ] && grep -q "$program_name.c.${test_type}.c" tmp;
  then 
    find_crash=1
    cat tmp
    if [ $sanitizer_type == "ubsan" ]; # for ubsan
    then
      runtime_stack_trace=`grep "runtime error" tmp | grep "$program_name.c.${test_type}.c:[0-9]*:[0-9]*" | grep -o ":[0-9]*:[0-9]*" | grep -o -E "[0-9]+:[0-9]*" | tr '\n' ','` 
      crash_loc=$runtime_stack_trace`grep "#" tmp | grep "$program_name.c.${test_type}.c" | grep -o "$program_name.c.${test_type}.c:[0-9]*:[0-9]*" | grep -o ":[0-9]*:[0-9]*" | grep -o -E "[0-9]+:[0-9]*" | tr '\n' ';'`
    else 
      # for other sans
      crash_loc=`grep "$program_name.c.${test_type}.c" tmp | grep -o "$program_name.c.${test_type}.c:[0-9]*:[0-9]*" | grep -o ":[0-9]*:[0-9]*" | grep -o -E "[0-9]+:[0-9]*" | tr '\n' ';'`
      if [ -z "$crash_loc" ]
      then 
      crash_loc=`grep "$program_name.c.${test_type}.c" tmp | grep -o "$program_name.c.${test_type}.c:[0-9]*" | grep -o ":[0-9]*" | grep -o -E "[0-9]*" | tr '\n' ';'`
      fi
    fi
    echo $crash_loc >> $result_file
  elif [ -f tmp ] && grep -q "ERROR" tmp;
  then
    # Current sanitizer specified the crash, but can not provide stack trace info.
    find_crash=1
    cat tmp
    # read stop
    crash_loc=`grep "ERROR" tmp | grep -oP "(?<=pc )[0-9a-fx]+"`
    echo $crash_loc
    if [ ! -n "$crash_loc" ]
    then 
	    crash_loc="UNRECOGNIZED_ERROR"
    fi
    echo $crash_loc >> $result_file
  elif echo $retcode | grep 13[0-9];
  then
    if [ -f core* ];
    then 
      # Crashed but can not be specified by the current sanitizer
      find_crash=1
      mv core* core
      gdb $bin core -ex "bt -30" -ex q > tmp
      crash_loc=`grep "$program_name.c.${test_type}.c" tmp | grep -o "$program_name.c.${test_type}.c:[0-9]*" | grep -o ":[0-9]*" | grep -o -E "[0-9]*" | tr '\n' ';'`
      echo $crash_loc >> $result_file
    else # Exit code obtained wrong, not sure why.
      echo "no error" >> $result_file
      find_crash=0
      cat tmp
      # read stop
    fi
  else 
    find_crash=0
    echo "no error" >> $result_file
  fi
  # read stop
  return $find_crash
}

function run_seed () {

  cnt=0
  valid_crash_num=0
  while((${cnt} < ${total}))
  do
    echo ${cnt}
    case $selected_fuzzer in
    afl | symcc)
      input=$crashes_dir/id:$(printf "%06d" $cnt)*
      ;;
    radamsa)
      input=${fuzzed_input}/file${file_num}_${cnt}
      ;;
    esac

    run origin
    origin_crash=$?
    run reduced
    reduced_crash=$?
    
    if [ $origin_crash -eq 0 ] && [ $reduced_crash -eq 1 ];
    then
      ((valid_crash_num++))
      if [ $save_crashes == 'save' ];
      then 
        save $input 
        # read stop
      fi
    elif [ $origin_crash -eq 1 ] && [ $reduced_crash -eq 1 ];
    then 
      echo "Attention: both the original and reduced program crashed!"
      # read stop
    fi

    clear -x

    let "cnt++"
  done

  # calculate valid crash rate
  echo -e "input_$seed_num: \tvalid_crash_num: $valid_crash_num \tinput_total: $input_total \tvalid_crash_rate: " `echo "scale=2; $valid_crash_num * 100 / $input_total" | bc`% >> $calc_out
  
}

function save () {
  input=$1
  crash_loc_array=(${crash_loc//,/ })
  for crash in ${crash_loc_array[@]};
  do
    if [ ${#crash} -gt 80 ]
    then 
      crash=${crash:0-80}
    fi
    crash_dir=$save_dir/`ls $save_dir | grep -x -E "crash_[0-9]*:$crash"`
    if [[ "$crash" == 0x* ]]
    then 
      echo ${crash: -3}
      crash_dir=$save_dir/`ls $save_dir | grep -x -E "crash_[0-9]*:0x[0-9a-f]*${crash: -3}"`
    fi
    if [ $crash_dir == $save_dir/ ];
    then
      # If this crash has not been specified, then mkdir a dir fot it.
      crash_id=`ls $save_dir | wc -l`
      crash_dir=$save_dir/crash_$crash_id:$crash;
      mkdir -p $crash_dir
    fi

    # copy the crash input into the dir.
    if [ $selected_fuzzer == 'afl' ] || [ $selected_fuzzer == 'symcc' ];
    then 
      cp $input $crash_dir/id:$(echo $input | grep -oP "(?<=id:)[0-9]+"),input_$seed_num,option_$(echo $option | grep -oE "\w"),$selected_fuzzer
    else
      cp $input $crash_dir/input${seed_num}_${cnt},option_$(echo $option | grep -oE "\w")
    fi

    # Save the sanitizers which can specify this crash.
    sanitizer_info_file=$crash_dir/sanitizer_info
    if [ ! -f $sanitizer_info_file ] || ! grep -q $sanitizer_type $sanitizer_info_file ;
    then
      echo $sanitizer_type >> $sanitizer_info_file;
    fi
    
    # Save error message
    error_msg_file=$crash_dir/error_msg
    if [ ! -f $error_msg_file ] || ! grep -q $sanitizer_type $error_msg_file ;
    then 
      echo ${sanitizer_type}: >> $error_msg_file
      cat tmp >> $error_msg_file
    fi
  done
}

rm -rf $calc_dir/$sanitizer_type 

for ((seed_num=${start_num}; seed_num <= ${end_num}; seed_num++));
do
  rm -rf ${fuzzed_input_dir}
  cp -r ${fuzzed_input_dir}_copy ${fuzzed_input_dir}

  case $selected_fuzzer in
    afl)
      crashes_dir=${fuzzed_input_dir}/result_${seed_num}/${sanitizer_type}/crashes
      total=`ls $crashes_dir/id* | wc -l`
      input_total=`cat ${fuzzed_input_dir}/result_${seed_num}/${sanitizer_type}/fuzzer_stats | grep "corpus_count" | grep -o "[0-9]*"`
      calc_out=$calc_dir/$sanitizer_type

      run_seed
      ;;
    symcc)
      crashes_dir=${fuzzed_input_dir}/result_${seed_num}/nosan/crashes
      total=`ls $crashes_dir/id* | wc -l`
      input_total=`cat ${fuzzed_input_dir}/result_${seed_num}/nosan/fuzzer_stats | grep "corpus_count" | grep -o "[0-9]*"`
      calc_out=$calc_dir/$sanitizer_type

      run_seed
      ;;
    radamsa)
      for ((file_num=0; file_num <= 1; file_num++));
      do
        fuzzed_input=${fuzzed_input_dir}/file${file_num}_fuzzed
        total=500
        input_total=500
        if [ ! -d $calc_dir/$sanitizer_type ]
        then 
          mkdir -p $calc_dir/$sanitizer_type
        fi
        calc_out=$calc_dir/$sanitizer_type/file_$file_num
        
        run_seed
      done
      ;;
  esac

  # read stop
done

rm -rf ${fuzzed_input_dir}
cp -r ${fuzzed_input_dir}_copy ${fuzzed_input_dir}
rm -rf ${fuzzed_input_dir}_copy




