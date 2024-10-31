#!/bin/bash
fuzzer_type=$1
sanitizer_type=$2
bin=$3

if [ -f ${bin} ];
then 
    rm ${bin}
fi

if [ $fuzzer_type = 'afl' ]
then 
    # for afl

    unset AFL_USE_ASAN
    unset AFL_USE_CFISAN
    unset AFL_USE_LSAN
    unset AFL_USE_MSAN
    unset AFL_USE_TSAN
    unset AFL_USE_UBSAN

    if [ $sanitizer_type != "nosan" ]
    then 
        export AFL_USE_$(echo "$sanitizer_type" | tr '[:lower:]' '[:upper:]')=1
    fi

    afl-clang-fast -w ./${program_name}.c.${test_type}.c  -o $bin
else 
    # for radamsa
    bin=${home_folder}/bins/${test_type}.${sanitizer_type}.out

    export ASAN_OPTIONS='abort_on_error=1'
    export UBSAN_OPTIONS='abort_on_error=1'
    export MSAN_OPTIONS='abort_on_error=1'
    export TSAN_OPTIONS='abort_on_error=1'
    
    CFLAGS=""
    case $sanitizer_type in 
    "asan")
        CFLAGS="-fsanitize=address"
        ;;
    "ubsan")
        CFLAGS="-fsanitize=undefined"
        ;;
    "msan")
        CFLAGS="-fsanitize=memory"
        ;;
    "tsan")
        CFLAGS="-fsanitize=thread -fPIE -pie"
        ;;
    "lsan")
        CFLAGS="-fsanitize=leak"
    esac
    
    clang $CFLAGS -g -w ./${program_name}.c.${test_type}.c -o $bin
fi

