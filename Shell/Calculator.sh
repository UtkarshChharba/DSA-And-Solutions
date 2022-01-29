#!/bin/bash

echo "Welcome To Calci"

read -p "ENTER THE FIRST NUMBER: " x
read -p "ENTER THE SECOND NUMBER: " y
read -p "WHAT OPERATION TO BE EXECUTED
1->ADD
2->SUB
3->DIV
4->MUL
5->POWER
6->MODULUS
7->SQUARE ROOT
0->EXIT
" operation

case $operation in
    1)res=`expr $x + $y`
    ;;
    2)res=`expr $x - $y`
    ;;
    3)res=`expr $x \* $y`
    ;;
    4)res=`expr $x / $y`
    ;;
    5)res=$(($x ** $y))
    ;;
    6)res=`expr $x % $y`
    ;;
    7)res=`echo "scale=4; sqrt($x)" | bc`
esac

echo "result: $res"


        