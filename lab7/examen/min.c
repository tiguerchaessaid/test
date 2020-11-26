#include "min.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void min(int t[], int n, int *min)
{

	int i;
	int nbmin = t[0];
	for (i=0;i<n;i++)
	{
		if (t[i] < nbmin)
		{

		nbmin = t[i];
		}
	}

	*min = nbmin;
	printf("le minimun du tableau est :%d",nbmin);
}
