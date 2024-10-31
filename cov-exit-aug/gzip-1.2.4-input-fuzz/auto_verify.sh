#!/bin/bash
outdir=$1
fuzzers=("radamsa" "afl")
sanitizers=("nosan" "asan" "ubsan" "msan" "tsan" "lsan")
for fuzzer in ${fuzzers[@]}
do
  for san in ${sanitizers[@]}
  do
    bash -x ./verify.sh $fuzzer $san save $1
  done
done

