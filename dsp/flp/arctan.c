/******************************************************************************
 * filename : arctan.c
 * author   : Sandeep Tayal
 * email    : sandympto@gmail.com 
 *****************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float arctan(float x)
{
    float val = 0;
    if (abs(x) < 1)
    {	    
        val = x - (x*x*x)/3 + (x*x*x*x*x)/5 
	    - (x*x*x*x*x*x*x)/7;
        return val;
    }
}


int main()
{   
    float f = 0.789;
    float val = arctan(f);
    printf("val = %f", val);
    return 0;
}
