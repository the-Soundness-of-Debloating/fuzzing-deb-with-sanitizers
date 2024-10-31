#!/bin/bash
home_folder=$(pwd)

while :
do
    # clear the trash 
    cd ${home_folder}
    shopt -s extglob
    rm -f ./'-'*
    rm -f ./'.'*
    find . -maxdepth 1 -type f -not \( -name "*.sh" -o -name "*reduced.c" -o -name "*origin.c" -o -name "argv-fuzz-inl.h" -o -name "path_check.h" -o -name "*.md"  -o -name "core*"  -o -name "tmp" \) -delete
    find ./input -maxdepth 1 -type f -delete
    find . -maxdepth 1 -type d -not \( -name "bins*" -o -name "input*" -o -name "result*" -o -name "train_input*" -o -name "test*" \) -exec rm -rf {} \;
    find ./result/afl_result/reduced -type d -not \( -name "*result_*" -o -name "*san" -o -name "crashes" -o -name "hangs" -o -wholename "*queue*" \) -delete
    find ./result/afl_result/reduced -type f -not \( -name "cmdline" -o -name "fuzz*" -o -name "plot_data" -o -name ".gitkeep" -o -name "id*" -o -name "README.txt" -o -wholename "queue/*" -o -name ".cur_input" \) -delete
    
    # restore the train_input directory
    rm -rf ${home_folder}/train_input
    cp -r ${home_folder}/train_input_copy ${home_folder}/train_input

    sleep 1s
done
