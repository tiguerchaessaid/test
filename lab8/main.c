#include "max.h"
#include "min.h"
#include "var.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int minimum,maximum;
    float var;
    float floornumber, ceilnumber;
    int tableau[7] = {13 ,12, 5, 1, 19, 13, 17};

    max(tableau,7, &maximum);
    min(tableau,7, &minimum);
    variance(tableau,7,&var);
    floornumber = floor(var);
    ceilnumber  = ceil(var);
    
  
    printf(" la valeur arrondie de la variance est floor: %f\n ceil:  %f\n ",floornumber,ceilnumber);
    return 0;
}
