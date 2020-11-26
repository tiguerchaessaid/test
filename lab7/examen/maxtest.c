#include <stdio.h>
#include <stdlib.h>
#include "max.h"
#include <math.h>


//ceci est un programme de test pour calculer le max d'un tableau d'entiers//

int main()
{
	int maximum;
	int nbmax = 0;
	int tab[5] = {2, 5 ,7 ,2 ,9};

	for (int i = 0; i < 5 ; i++)
	{
		printf("tab[ %d ] = %d \t",i,tab[i]);

	}

	 max(tab,5,&maximum);


	return 0;
}

