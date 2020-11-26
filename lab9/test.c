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

    int tableau[10] = {4 ,9, 10, 11, 12, 15, 12, 9, 0, 30};

    max(tableau,10, &maximum);
    min(tableau,10, &minimum);
    variance(tableau,10, &var);

    printf(" le max est :%d\t, le min est :%d\t, la variance est :%f\n", maximum, minimum, var);
    return 0;
}
