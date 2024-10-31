#!/bin/bash
cnt=0
while((${cnt}<=27))
do
	rm -rf file${cnt}_fuzzed
	mkdir file${cnt}_fuzzed
	cntt=0
	while(( $cntt<=499 )) 
	do
  	radamsa --seed ${cntt} ../afl_seed/files/file${cnt} > file${cnt}_fuzzed/file${cnt}_${cntt}
  	let "cntt++"
  	done
let "cnt++"
done

