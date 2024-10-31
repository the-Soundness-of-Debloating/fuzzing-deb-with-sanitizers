Command line used to find this crash:

afl-fuzz -b 0 -i /workspace/fuzzing-deb-with-sanitizers/cov/uniq-8.16-argv-fuzz/input/afl_seed/input_1 -o /workspace/fuzzing-deb-with-sanitizers/cov/uniq-8.16-argv-fuzz/result/afl_result/reduced/result_1/asan /workspace/fuzzing-deb-with-sanitizers/cov/uniq-8.16-argv-fuzz/bins/afl_reduced.asan.out

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 0 B.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

