#!/bin/bash

# ./gen.sh <problem> <# of testcases>

p=$1


for i in {11..15}; do
    g++ gen.cpp -o gen.out
    ./gen.out > testcases/$p/$i.in
    ./$p.out < testcases/$p/$i.in > testcases/$p/$i.ans
done

