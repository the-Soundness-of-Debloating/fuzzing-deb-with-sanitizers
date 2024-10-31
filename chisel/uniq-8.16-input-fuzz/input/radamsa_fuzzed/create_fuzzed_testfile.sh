#!/bin/bash
	rm -rf file0_fuzzed file1_fuzzed
	mkdir file0_fuzzed file1_fuzzed
	cntt=0
	while(( $cntt<=499 )) 
	do
  	radamsa --seed ${cntt} ../afl_seed/files/data.txt > file0_fuzzed/file0_${cntt}
  	radamsa --seed ${cntt} ../afl_seed/files/input > file1_fuzzed/file1_${cntt}
  	let "cntt++"
  	done

