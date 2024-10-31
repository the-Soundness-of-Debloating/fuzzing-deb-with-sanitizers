#!/bin/bash
# Usage: Automatically run all the afl test for this program.
home_folder=$(pwd)
program_name=tar-1.14
program_type=("origin" "reduced")
sanitizers=("nosan" "asan" "ubsan" "msan" "tsan" "lsan")
max_seed_num=22
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
    0)  # echo "foo foo" > foo.orig
        # cp foo.orig foo
        # echo "bar " > bar.orig
        # cp bar.orig bar
        # ./tar cf foo.tar foo bar (tar-archives-multiple-files)
        echo "foo foo" > foo
        echo "bar " > bar
        ;;    
    1)  # rm foo bar
        # ./tar xf foo.tar (tar-archives-multiple-files)
        rm foo bar
        cp ${home_folder}/file_copy/foo.tar_copy ${home_folder}/foo.tar
        ;;  
    2)  # touch foo
        # ./tar cf foo.tar foo (tar-complains-about-missing-file)
        rm -rf foo foo.tar
        touch foo 
        ;;  
    3)  # touch foo
        # ./tar xf foo.tar bar (tar-complains-about-missing-file)
        rm -rf foo.tar bar
        touch foo 
        ;;  
    4|5) # ./tar v (tar-demands-at-least-one-ctx)
         # ./tar tx (tar-demands-at-most-one-ctx)
        rm -rf foo.tar bar
        touch foo 
        ;;
    6)  # mkdir -p foo/{1,2,3}
        # mkdir -p foo/1/{10,11}
        # mkdir -p foo/1/10/{100,101,102}
        # ./tar cf foo.tar -C foo . (tar-extracts-all-subdirs)
        rm -rf foo*
        mkdir -p foo/{1,2,3}
        mkdir -p foo/1/{10,11}
        mkdir -p foo/1/10/{100,101,102}
        ;;  
    7|8)  # rm -rf foo/*
          # ./tar xf foo.tar -C foo ./1/10 (tar-extracts-all-subdirs)
        rm -rf foo/*
        cp ${home_folder}/file_copy/foo.tar_7_8_copy ${home_folder}/foo.tar
        ;;  
    9|11)  # touch foo
           # ./tar cf foo.tar foo
        rm -rf foo foo.tar
        touch foo
        ;; 
    10)  # ./tar xf foo.tar (tar-extracts-file)
        rm -rf foo foo.tar
        cp ${home_folder}/file_copy/foo.tar_10_copy ${home_folder}/foo.tar
        ;; 
    12)  # rm foo
         # cat foo.tar | ./tar x （the same "foo.tar" with input_10) (tar-extracts-from-standard-input)
        rm -rf foo
        cp ${home_folder}/file_copy/foo.tar_10_copy ${home_folder}/foo.tar
        ;;
    13)  # touch foo bar
         # ./tar cf foo.tar foo bar (tar-extracts-multiple-files)
        rm -rf foo bar
        touch foo bar
        ;;
    14)  # rm foo bar
         # ./tar -xf foo.tar (tar-extracts-multiple-files)
        rm -rf foo bar
        cp ${home_folder}/file_copy/foo.tar_14_copy ${home_folder}/foo.tar
        ;;
    15)  # echo foo > foo
         # ./tar cf foo.tar foo (tar-extracts-to-standard-output)
        rm -rf foo
        echo foo > foo
        ;;
    16)  # cat foo.tar | ./tar Ox | cmp foo -   (tar-extracts-to-standard-output)
        rm -rf foo
        cp ${home_folder}/file_copy/foo.tar_16_copy ${home_folder}/foo.tar
        ;;
    17)  # echo "foo foo bar" > foo.orig
         # cp foo.orig foo
         # ./tar czf foo.tar.gz foo (tar-handles-cz-options)
        rm -rf foo
        echo "foo foo bar" > foo
        ;;
    18)  # rm foo
         # ./tar xzf foo.tar.gz (tar-handles-cz-options)
        rm -rf foo
        cp ${home_folder}/file_copy/foo.tar.gz_18_copy ${home_folder}/foo.tar.gz
        ;;
    19)  # touch foo
         # tar cf foo.tar foo
         # echo foo >foo.exclude
         # ./tar xf foo.tar -X foo.exclude （tar-handles-empty-include-and-non-empty-exclude-list）
        rm -rf foo foo.exclude
        cp ${home_folder}/file_copy/foo.tar_19_copy ${home_folder}/foo.tar
        cp ${home_folder}/file_copy/foo.exclude_19_copy ${home_folder}/foo.exclude
        ;;
    20) # echo "abcd abcd" > foo.orig
        # echo "qwerqwerqwer" > bar.orig
        # echo "" > baz.orig
        # cp foo.orig foo
        # cp bar.orig bar
        # cp baz.orig baz
        # tar cf foo.tar foo bar baz
        # echo foo >foo.exclude
        # rm foo bar baz
        # ./tar xf foo.tar foo bar -X foo.exclude （tar-handles-exclude-and-extract-lists）
        rm -rf foo.tar foo bar baz foo.exclude
        cp ${home_folder}/file_copy/foo.tar_20_copy ${home_folder}/foo.tar
        cp ${home_folder}/file_copy/foo.exclude_20_copy ${home_folder}/foo.exclude
        ;;
    21) # touch foo
        # touch bar
        # ./tar cf foo.tar foo bar
        # echo foo > foo.exclude
        # echo bar > bar.exclude
        # rm foo bar
        # ./tar xf foo.tar -X foo.exclude -X bar.exclude (tar-handles-multiple-X-options)
        rm -rf foo.tar foo bar foo.exclude bar.exclude
        cp ${home_folder}/file_copy/foo.tar_21_copy ${home_folder}/foo.tar
        cp ${home_folder}/file_copy/foo.exclude_21_copy ${home_folder}/foo.exclude
        cp ${home_folder}/file_copy/bar.exclude_21_copy ${home_folder}/bar.exclude
        ;;
    22) # mkdir foo
        # touch foo/bar
        # tar cf foo.tar foo
        # rm -rf foo
        # echo foo/bar >foobar.exclude
        # ./tar xf foo.tar foo -X foobar.exclude （tar-handles-nested-exclude）
        rm -rf foo foo/bar foo.tar foobar.exclude
        cp ${home_folder}/file_copy/foo.tar_22_copy ${home_folder}/foo.tar
        cp ${home_folder}/file_copy/foobar.exclude_22_copy ${home_folder}/foobar.exclude
        ;;
    esac
    
    nohup bash -x ./trash_clear.sh &

    timeout 24h afl-fuzz -b $cpu -i ${input_dir}/input_${input_num} -o ${result_dir} ${bin} ${option}
    retcode=$?
    if [ $retcode -ne 124 ];
    then 
        # maybe result in a crash, try crash mode.
        timeout 24h afl-fuzz  -C -b $cpu -i ${input_dir}/input_${input_num} -o ${result_dir} ${bin} ${option}
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

