#include "var.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	float var;
	int tab[5] = {2, 5 ,7 ,2 ,9};


	for (int i = 0; i < 5 ; i++)
	{
	printf("tab[ %d ] = %d \n",i,tab[i]);

	}	

	variance(tab,5,&var);


return 0;
}
