#!/bin/bash
home_folder=$(pwd)

while :
do
    # clear the trash 
    cd ${home_folder}
    shopt -s extglob
    rm -d -r -f ./'-'*
    rm -d -r -f ./'--'*
    rm -d -r -f ./'.'*

    find . -maxdepth 1 -type d -not \( -name "bins*" -o -name "input*" -o -name "result*" -o -name "test*" \) -exec rm -rf {} \;
    find ./result/afl_result/reduced -type d -not \( -name "*result_*" -o -name "*san" -o -name "crashes" -o -name "hangs" -o -wholename "*queue*" \) -delete

    sleep 1s
done
