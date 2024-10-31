#!/bin/bash
for ((input_num=0; input_num<8; input_num++));
do
	for ((count=0; count<500; count++));
	do
        radamsa --seed ${count} ../afl_seed/input_${input_num}/input${input_num} > ./input${input_num}_fuzzed/input${input_num}_${count}
	done
done
