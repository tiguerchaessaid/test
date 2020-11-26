#include "max.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void max(int t[], int n, int *max)
{
	int i = 0;
	int maxi = t[0];
	for (i = 0; i < n; i++)
	{

		if (t[i] > maxi)


		maxi = t[i];

	}

	printf("le maximum du tableau est :%d",maxi);

	*max = maxi;

}
