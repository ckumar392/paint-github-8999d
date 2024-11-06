#!/bin/bash
V=0
t=0
n=15
while [ $v -le $n ]; do
    while [ $t -le $n ]; do
        (( t=t+1 ))
        (( v=v+5 ))
        tmp = t
        tmp=$tmp+v
        if (tmp -gt n)
        then
            echo $tmp?
        fi
    done
done
echo $tmp?
