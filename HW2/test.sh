#!/bin/bash

cyan=`tput setaf 51`
green=`tput setaf 46`
yellow=`tput setaf 226`
red=`tput setaf 196`

problem=$1

for input in $(ls -v testcases/$problem | grep .in); do
    
    T=`echo ${input} | sed 's/.in//g'`
    ans="${T}.ans"
    
    printf "${yellow}Running test case: ${cyan}testcase${problem}-${T}"

    ./${problem}.out < ./testcases/${problem}/${input} > ${T}.result
    
    temp=`diff -u ./testcases/${problem}/${ans} ${T}.result`

    if [ $? -eq 0 ]
    then
        printf "  ==>  ${green}Pass!"
    else 
        printf "  ==>  ${red}Fail! Please check the diff output message below:\n"
    fi

    echo "$temp" | sed "s/^-/$(tput setaf 1)&/; s/^+/$(tput setaf 2)&/; s/^@/$(tput setaf 6)&/; s/$/$(tput sgr0)/"
    
    rm -f ${T}.result
done
