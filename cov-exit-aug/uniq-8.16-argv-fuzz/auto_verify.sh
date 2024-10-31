#!/bin/bash
outdir=$1
fuzzers=("radamsa" "afl" "symcc")
sanitizers=("nosan" "asan" "ubsan" "msan" "tsan" "lsan")

for san in ${sanitizers[@]}
do
  bash -x ./verify.sh radamsa $san save $1
done

for san in ${sanitizers[@]}
do
  bash -x ./verify.sh afl $san save $1 0
  bash -x ./verify.sh afl $san save $1 1
  bash -x ./verify.sh afl $san save $1 2
done

for san in ${sanitizers[@]}
do
  bash -x ./verify.sh symcc $san save $1 0
done

