#!/bin/bash
cnt=0
while((${cnt}<=42))
do
	rm -rf input${cnt}_fuzzed
	mkdir input${cnt}_fuzzed
	cntt=0
	while(( $cntt<=499 )) 
	do
  	radamsa --seed ${cntt} ../afl_seed/input_${cnt}/input > input${cnt}_fuzzed/input${cnt}_${cntt}
  	let "cntt++"
  	done
let "cnt++"
done

