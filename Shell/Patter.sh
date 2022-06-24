#!/bin/bash



echo "THE PATTERN IS:-"
read -p "Number of Rows: " Rows

for((i=0;i<$Rows;i++))
    do
        for((j=0;j<$(expr $Rows-$i);j++))
            do 
                echo -n " "
            done
        for((j=0;j<$((2*i+1));j++))
            do
                echo -n "*"
            done
        echo ""
    done

    