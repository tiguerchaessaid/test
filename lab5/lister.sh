#!/bin/bash


for f in cd '~/Documents/labs/lab4/5AS05-partie4'
do
	if [ -d $f ]
	then
		ls $f
	else
		echo" le répertoire n'existe pas"
	fi
done




