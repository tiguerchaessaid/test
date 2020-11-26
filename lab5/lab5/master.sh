#!/bin/sh

# Fist Shell

ls /home/safia/Documents/lab/lab4 # lister les fichiers se trouvant dans le répertoire utilisé dans la partie4 et le chemin d'accès au répertoire
master_syscom="Hello Embedded Linux" # Creation d'une variable qui s'appele master syscom ou on a stocker Hello Emabedded Linux

# Second shell

#echo "please enter your first_number : $first_number"
read -p "please enter your first_number :" $first_number 
#echo "please enter your second_number : $second_number"
read -p "please enter your second_number : " $second_number 


if [ "$first_number" <  "$second_number" ] 
then 
	echo "first_number is less than second_number"

elif [ "$first_number" >  " $second_number" ] 
then
	echo "first_number is greater then  second_number "
	
else
		echo "first_number is equal to the second_number "

fi


# Third Shell
for files in /home/safia/Documents/lab/lab4/* # Parcourir tous les fichiers et repertoires de la partie 4
do 
	if [ -d $files ]  		# On verifie si on a bien un repertoire
	then 
		ls $files		# Si oui, on liste tous les fichiers du repertoire 
	fi
done

# Forth Shell
for fichiers in  cd '/home/safia/Documents/lab/lab4/5AS05-partie4/sardar'
do
   if [ -d $fichiers ]
   then
     ls $fichiers
   fi
done

# Fifth Shell
for fichiers in  cd '/home/safia/Documents/lab/lab4/5AS05-partie4/sardar'
do
   if [ -d $fichiers ]
   then
     ls $fichiers
     else
                echo "le chemin passé en parametre n'est pas un repertoire valide "

   fi
done

#sixth shell

#!/bin/sh

mkdir pictures
cal=1

while [[ $cal -le $1  ]] 
do
	wget "https://xkcd.com/$cal"
	wget=$(grep -o "http.*jpg" $cal)
	weget $url > "./pictures/$cal"
	cal=$((cal+1))
done

eog ./pictures
