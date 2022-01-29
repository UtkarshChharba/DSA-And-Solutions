#! /bin/bash

read -p "Number Of elements In Array: " length
for((i=0;i<$length;i++))
    do
        read arr[$i]
    done
for((i=0;i<$length;i++))
    do 
        min=$i
        for((j=i;j<$length;j++))
            do
            if((arr[$min]>arr[$j]))
            then
                min=$j
            fi
            done
        temp=${arr[$min]}
        arr[$min]=${arr[$i]}
        arr[$i]=$temp
        done
        
echo "This Is The Ascending Order ${arr[@]}"

read -p "Number Of elements In Array: " length
for((i=0;i<$length;i++))
    do
        read arr[$i]
    done
for((i=0;i<$length;i++))
    do 
        max=$i
        for((j=i;j<$length;j++))
            do
            if((arr[$max]<arr[$j]))
            then
                max=$j
            fi
            done
        temp=${arr[$max]}
        arr[$max]=${arr[$i]}
        arr[$i]=$temp
        done
        
echo "This Is the descending order ${arr[@]}"