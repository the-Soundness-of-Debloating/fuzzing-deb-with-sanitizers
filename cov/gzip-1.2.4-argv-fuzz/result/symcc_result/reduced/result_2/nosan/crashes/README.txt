Command line used to find this crash:

afl-fuzz -C -b 13 -i /workspace/fuzzing-deb-with-sanitizers/cov/gzip-1.2.4-argv-fuzz/input/afl_seed/input_2 -o /workspace/fuzzing-deb-with-sanitizers/cov/gzip-1.2.4-argv-fuzz/result/symcc_result/reduced/result_2/nosan /workspace/fuzzing-deb-with-sanitizers/cov/gzip-1.2.4-argv-fuzz/bins/afl_reduced.nosan.out

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 0 B.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

