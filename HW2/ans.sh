#!/bin/bash

# ./gen.sh <problem> <# of testcases>

p=$1

for i in {2..15}; do
    ./$p.out < testcases/$p/$i.in > testcases/$p/$i.ans
done

