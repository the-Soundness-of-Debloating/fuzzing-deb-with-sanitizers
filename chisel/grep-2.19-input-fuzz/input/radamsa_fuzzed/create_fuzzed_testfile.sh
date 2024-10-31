#!/bin/bash
	rm -rf file0_fuzzed file1_fuzzed file2_fuzzed
	mkdir file0_fuzzed file1_fuzzed file2_fuzzed
	cntt=0
	while(( $cntt<=499 )) 
	do
  	radamsa --seed ${cntt} ../afl_seed/file_0/input > file0_fuzzed/file0_${cntt}
  	radamsa --seed ${cntt} ../afl_seed/file_1/input2 > file1_fuzzed/file1_${cntt}
  	mkdir file2_fuzzed/file2_${cntt}
	radamsa --seed ${cntt} ../afl_seed/file_2/input > file2_fuzzed/file2_${cntt}/input_${cntt}
	radamsa --seed ${cntt} ../afl_seed/file_2/input2 > file2_fuzzed/file2_${cntt}/input2_${cntt}
  	let "cntt++"
  	done

