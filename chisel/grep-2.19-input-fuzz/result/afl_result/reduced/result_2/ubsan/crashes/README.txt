Command line used to find this crash:

afl-fuzz -C -b 3 -i /workspace/fuzzing-deb-with-sanitizers/chisel/grep-2.19-input-fuzz/input/afl_seed/file_2 -o /workspace/fuzzing-deb-with-sanitizers/chisel/grep-2.19-input-fuzz/result/afl_result/reduced/result_2/ubsan -- /workspace/fuzzing-deb-with-sanitizers/chisel/grep-2.19-input-fuzz/bins/afl_reduced.ubsan.out 1 -h -r @@

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 0 B.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

