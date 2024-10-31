#!/bin/bash
# Usage: Automatically run all the afl test for this program.
home_folder=$(pwd)
program_name=grep-2.19
program_type=("origin" "reduced")
sanitizers=("nosan" "asan" "ubsan" "msan" "tsan" "lsan")
max_seed_num=26
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

    case ${input_num} in 
    0) # "a" input2;
        input_file=${input_dir}/file_1 
        option="a @@"
        ;;
    1) # "a" -v -H -r input_dir
        input_file=${input_dir}/file_2 
        option="a -v -H -r @@"
        ;;
    2) # "1" -h -r input_dir
        input_file=${input_dir}/file_2 
        option="1 -h -r @@"
        ;;
    3) # -n "si" input2
        input_file=${input_dir}/file_1 
        option="-n si @@"
        ;;
    4) # "1" -r input_dir -l
        input_file=${input_dir}/file_2 
        option="1 -r @@ -l"
        ;;
    5) # "1" -r input_dir -L
        input_file=${input_dir}/file_2 
        option="1 -r @@ -L"
        ;;
    6) # "randomtext" -r input_dir -c
        input_file=${input_dir}/file_2 
        option="randomtext -r @@ -c"
        ;;
    7) # -o [r][a][n][d]* input2
        input_file=${input_dir}/file_1 
        option="-o [r][a][n][d]* @@"
        ;;
    8) # "1" -r input_dir -q
        input_file=${input_dir}/file_2 
        option="1 -r @@ -q"
        ;;
    9) # "1" -r input_dir -s
        input_file=${input_dir}/file_2 
        option="1 -r @@ -s"
        ;;
    10) # -v "a" input2
        input_file=${input_dir}/file_1 
        option="-v a @@"
        ;;
    11) # -i "Si" input2
        input_file=${input_dir}/file_1 
        option="-i Si @@"
        ;;
    12) # -w "Si" input2
        input_file=${input_dir}/file_1 
        option="-w Si @@"
        ;;
    13) # -x "Don't" input2
        input_file=${input_dir}/file_1 
        option="-x Don't @@"
        ;;
    14) # -F "randomtext*" input2
        input_file=${input_dir}/file_1 
        option="-F randomtext* @@"
        ;;
    15) # -E "randomtext*" input2
        input_file=${input_dir}/file_1 
        option="-E randomtext* @@"
        ;;
    16) # "ye " input
        input_file=${input_dir}/file_0 
        option="ye\s @@"
        ;;
    17) # "cold" input
        input_file=${input_dir}/file_0 
        option="cold @@"
        ;;
    18) # "not exist" input
        input_file=${input_dir}/file_0 
        option="not_exist @@"
        ;;
    19) # ^D input2
        input_file=${input_dir}/file_1 
        option="^D @@"
        ;;
    20) # .$ input2
        input_file=${input_dir}/file_1 
        option=".$ @@"
        ;;
    21) # \^ input2
        input_file=${input_dir}/file_1 
        option="\^ @@"
        ;;
    22) # \^$ input2
        input_file=${input_dir}/file_1 
        option="\^$ @@"
        ;;
    23) # ^[AEIOU] input2
        input_file=${input_dir}/file_1 
        option="^[AEIOU] @@"
        ;;
    24) # ^[^AEIOU] input2
        input_file=${input_dir}/file_1 
        option="^[^AEIOU]  @@"
        ;;
    25) # -E "free[^[:space:]]+" input2
        input_file=${input_dir}/file_1 
        option="-E free[^[:space:]]+ @@"
        ;;
    26) # -E '\b(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)' input
        input_file=${input_dir}/file_0 
        option="-E '\b(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)' @@"
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

