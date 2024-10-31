Command line used to find this crash:

afl-fuzz -C -b 9 -i /workspace/fuzzing-deb-with-sanitizers/chisel/uniq-8.16-input-fuzz/input/afl_seed/files -o /workspace/fuzzing-deb-with-sanitizers/chisel/uniq-8.16-input-fuzz/result/afl_result/reduced/result_2/ubsan -- /workspace/fuzzing-deb-with-sanitizers/chisel/uniq-8.16-input-fuzz/bins/afl_reduced.ubsan.out -d

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 0 B.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

