#!/bin/bash

# ./gen.sh <problem> <# of testcases>

p=$1


for i in {11..15}; do
    if [ $p -eq 4 ]; then
        g++ gen4.cpp -o gen.out
    else
        g++ gen.cpp -o gen.out
    fi
    ./gen.out > testcases/$p/$i.in
    ./$p.out < testcases/$p/$i.in > testcases/$p/$i.ans
    echo "testcase$i finish"
done

