#!/bin/bash
# Usage: Automatically run all the afl test for this program.
home_folder=$(pwd)
program_name=tar-1.14
program_type=("origin" "reduced")
sanitizers=("nosan" "asan" "ubsan" "msan" "tsan" "lsan")
max_seed_num=16
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
        0) # ./tar xf foo.tar (tar-archives-multiple-files)
            input_file=${input_dir}/file_2 
            option="xf @@" 
            ;;  
        1) # ./tar xf foo.tar bar (tar-complains-about-missing-file)
            input_file=${input_dir}/file_4 
            option="xf @@ bar " 
            ;;  
        2)  # ./tar xf foo.tar -C foo ./1/10 (tar-extracts-all-subdirs)
            input_file=${input_dir}/file_5 
            option="xf @@ -C foo ./1/10 " 
            ;;  
        3)  # ./tar xf foo.tar (tar-extracts-file)
            input_file=${input_dir}/file_6 
            option="xf @@" 
            ;; 
        4)  # cat foo.tar | ./tar x （the same "foo.tar" with input_10) (tar-extracts-from-standard-input)
            input_file=${input_dir}/file_6 
            option="x" 
            ;;
        5)  # ./tar -xf foo.tar (tar-extracts-multiple-files)
            input_file=${input_dir}/file_7 
            option="-x" 
            ;;
        6) # cat foo.tar | ./tar Ox | cmp foo -   (tar-extracts-to-standard-output)
            input_file=${input_dir}/file_9 
            option="Ox" 
            ;;
        7)  # ./tar xzf foo.tar.gz (tar-handles-cz-options)
            input_file=${input_dir}/file_11 
            option="xzf @@ " 
            ;;
        8)  # ./tar xf foo.tar -X foo.exclude （tar-handles-empty-include-and-non-empty-exclude-list） (fuzz "foo.tar")
            input_file=${input_dir}/file_6 
            option="xf @@ -X ${input_dir}/file_12/foo.exclude" 
            ;;
        9) # ./tar xf foo.tar -X foo.exclude （tar-handles-empty-include-and-non-empty-exclude-list） (fuzz "foo.exclude")
            input_file=${input_dir}/file_12 
            option="xf @@ -X ${input_dir}/file_6/foo.tar" 
            ;;
        10) # ./tar xf foo.tar foo bar -X foo.exclude （tar-handles-exclude-and-extract-lists） (fuzz "foo.tar")
            input_file=${input_dir}/file_13 
            option="xf @@ -X ${input_dir}/file_12/foo.exclude" 
            ;;
        11) # ./tar xf foo.tar foo bar -X foo.exclude （tar-handles-exclude-and-extract-lists） (fuzz "foo.exclude")
            input_file=${input_dir}/file_12 
            option="xf ${input_dir}/file_13/foo.tar -X @@" 
            ;;
        12) # ./tar xf foo.tar -X foo.exclude -X bar.exclude (tar-handles-multiple-X-options) (fuzz "foo.tar")
            input_file=${input_dir}/file_14 
            option="xf @@ -X ${input_dir}/file_12/foo.exclude -X ${input_dir}/file_15/bar.exclude" 
            ;;
        13) # ./tar xf foo.tar -X foo.exclude -X bar.exclude (tar-handles-multiple-X-options) (fuzz "foo.exclude")
            input_file=${input_dir}/file_12 
            option="xf ${input_dir}/file_12/foo.exclude -X @@ -X ${input_dir}/file_15/bar.exclude" 
            ;;
        14) # ./tar xf foo.tar -X foo.exclude -X bar.exclude (tar-handles-multiple-X-options) (fuzz "bar.exclude")
            input_file=${input_dir}/file_15 
            option="xf ${input_dir}/file_12/foo.exclude -X ${input_dir}/file_12/foo.exclude -X @@" 
            ;;
        15) # ./tar xf foo.tar foo -X foobar.exclude （tar-handles-nested-exclude） (fuzz "foo.tar")
            input_file=${input_dir}/file_16 
            option="xf @@ foo -X ${input_dir}/file_17/foobar.exclude" 
            ;;
        16) # ./tar xf foo.tar foo -X foobar.exclude （tar-handles-nested-exclude） (fuzz "foobar.exclude")
            input_file=${input_dir}/file_17 
            option="xf ${input_dir}/file_16/foo.tar foo -X @@" 
            ;;
    esac

    nohup bash -x ./trash_clear.sh &

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

