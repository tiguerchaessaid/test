#!/bin/bash

read -p "introduisez une un entier" var


for i in  $var
do

	wget -O image$i "http://xkcd.com/$i"
	eog image$i.jpg
done



