/******************************************************************************
 * filename : log.c
 * author   : Sandeep Tayal
 * email    : sandympto@gmail.com 
 *****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float logn(float x)
{
    float val = 0;
    if (x>0  && x<=2)
    {
        val = (x-1) - (x-1)*(x-1)/2 + (x-1)*(x-1)*(x-1)/3 - 
		(x-1)*(x-1)*(x-1)*(x-1)/4 + (x-1)*(x-1)*(x-1)*(x-1)*(x-1)/5;
	return val;
    }	    
    return val;
}

int main(int argc, char **argv)
{
    float f =  atof(argv[1]);	
    f = 0;
    while(f < 2)
    {
      printf("%f ", logn(f));	
      f = f + 0.01;
    }
    return 0;
}
