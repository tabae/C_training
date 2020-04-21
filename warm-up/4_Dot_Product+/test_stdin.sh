#!/bin/bash

EXE=./${1}


echo '-----------------------------------'
for i in {1..6}
do
    echo "test case ${i}" 
    echo -n 'actual output  : '
    cat test_case/test_case${i}.txt | ${EXE}
    echo -n 'expected output: '
    cat test_case/expected${i}.txt
    echo ''
    echo '-----------------------------------'
done