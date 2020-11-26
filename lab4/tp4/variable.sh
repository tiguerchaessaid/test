#!/bin/bash




read -p "introduiser un entier:" var1
read -p "introduiser un entier:" var2
if [ $var1 -lt $var2 ]
then echo " $var1 est inferieur à $var2"
elif [ $var1 -gt $var2 ]
then	
	echo "$var1 est superieur à $var2"
else 
	echo " les deux nombres sont égaux"
fi




