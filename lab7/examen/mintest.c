#include "min.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int minimum;
	int tab[5] = {2, 5 ,7 ,2 ,9};


	for (int i = 0; i < 5 ; i++)
	{
		printf("tab[ %d ] = %d \n",i,tab[i]);
	}	

	min(tab,5,&minimum);


return 0;
}
