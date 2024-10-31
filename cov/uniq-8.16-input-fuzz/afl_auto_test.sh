#!/bin/bash
# Usage: Automatically run all the afl test for this program.
home_folder=$(pwd)
program_name=uniq-8.16
program_type=("origin" "reduced")
sanitizers=("nosan" "asan" "ubsan" "msan" "tsan" "lsan")
max_seed_num=7
test_type=$1
sanitizer_type=$2
start_num=$3
end_num=$4
cpu=$5
result_root_dir=$6

if [ $# -lt 5 ] 
then 
    echo "Usage: bash -x ./afl_auto_test.sh [sanitizer_type] [test_type] [start_num] [end_num] [cpu_id] [result_root_dir]"
    echo "Example: bash -x./afl_auto_test.sh reduced nosan 0 3 0"
    exit 1
fi

legal_type=0
for type in ${program_type[@]}; do
    if [ ${test_type} = ${type} ]
    then 
        legal_type=1
        break
    fi
done

if [ ${legal_type} = 0 ];
then 
    echo -e "Error: Wrong test_type! Please choose from following types:  ${program_type[@]}"
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
    echo -e "Error: Wrong sanitizer! Please choose from following types:  ${sanitizers[@]}"
    exit 1
fi

bin=${home_folder}/bins/afl_${test_type}.${sanitizer_type}.out

source ./compile.sh afl ${sanitizer_type} $bin

if [ ! ${start_num} ] || [ ${start_num} -lt 0 ] || [ ${start_num} -gt $max_seed_num ]
then 
    let start_num=0
fi

if [ ! ${end_num} ] || [ ${end_num} -lt 0 ] || [ ${end_num} -gt $max_seed_num ]
then 
    let end_num=$max_seed_num
fi


for (( input_num=${start_num}; input_num <= ${end_num}; input_num++))
do 
    input_dir=${home_folder}/input/afl_seed

    if [ -z $result_root_dir ]
    then 
        result_dir=${home_folder}/result/afl_result/${test_type}/result_${input_num}/${sanitizer_type}
    else 
        result_dir=$result_root_dir/${test_type}/result_${input_num}/${sanitizer_type}
    fi

    if [ -d $result_dir ];
    then 
        rm -rf $result_dir
    else 
        mkdir -p $result_dir
    fi

    input_file=${input_dir}/files
    case ${input_num} in 
    0) # "" files
        option=""
        ;;
    1) # "-c" files
        option="-c"
        ;;
    2) # "-d" files
        option="-d"
        ;;
    3) # "-u" files
        option="-u"
        ;;
    4) # "-i" files
        option="-i"
        ;;
    5) # "-f 5" files
        option="-f 5"
        ;;    
    6) # "-s 10" files
        option="-s 10"
        ;;    
    7) # "-w 10" files
        option="-w 10"
        ;;    
    esac

    timeout 24h afl-fuzz -b $cpu -i ${input_file} -o ${result_dir} -- ${bin} ${option}
    retcode=$?
    if [ $retcode -ne 124 ];
    then 
        # maybe result in a crash, try crash mode.
        timeout 24h afl-fuzz  -C -b $cpu -i ${input_file} -o ${result_dir} -- ${bin} ${option}
        retcode=$?
    fi
    if [ $retcode -eq 124 ];
    then 
        cd $result_dir/default
        mv * ..
        cd ..
        rm -rf default
    fi
done

