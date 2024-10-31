#!/bin/bash
for ((input_num=0; input_num<5; input_num++));
do
    [ ! -d ../afl_seed/input_${input_num} ] && source ../afl_seed/create_afl_seed.sh
    if [ -d ./input${input_num}_fuzzed ]
    then 
        rm ./input${input_num}_fuzzed/*
        mkdir ./input${input_num}_fuzzed
    else
        mkdir ./input${input_num}_fuzzed
    fi
    for ((count=0; count<500; count++));
    do
        radamsa --seed ${count} ../afl_seed/input_${input_num}/input > ./input${input_num}_fuzzed/input${input_num}_${count}
    done
done
