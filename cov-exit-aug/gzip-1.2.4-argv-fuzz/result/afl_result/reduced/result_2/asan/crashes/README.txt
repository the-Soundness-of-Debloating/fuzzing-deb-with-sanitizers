Command line used to find this crash:

afl-fuzz -b 15 -i /workspace/fuzzing-deb-with-sanitizers/cov-aug-0919/gzip-1.2.4-argv-fuzz/input/afl_seed/input_2 -o /workspace/fuzzing-deb-with-sanitizers/cov-aug-0919/gzip-1.2.4-argv-fuzz/result/afl_result/reduced/result_2/asan /workspace/fuzzing-deb-with-sanitizers/cov-aug-0919/gzip-1.2.4-argv-fuzz/bins/afl_reduced.asan.out

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 0 B.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

