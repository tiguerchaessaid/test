#include "var.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>





void variance(int t[], int n, float *var)
{

	int s = 0;
	float M = 0;
	float V = 0;
	float S = 0;
	for (int i = 0; i< n ;i++)
	{
	
		s = s + t[i];
	}

	M = s/2;
	for (int i= 0;i < n ; i++)
	{

		S = S +  ((t[i] - M)*(t[i] - M)); 
	}


	V = S/n;

	*var = V;
	printf("la variance est : %f\n", V);
}
