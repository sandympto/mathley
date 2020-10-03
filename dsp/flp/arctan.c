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
    int flag = 0;	
    if (x < 0)
    {
        x = -x;
	flag = 1;
    }
    float val = 0;
    if (abs(x) < 1)
    {	    
        val = x - (x*x*x)/3 + (x*x*x*x*x)/5 
	    - (x*x*x*x*x*x*x)/7;
	if (flag == 1)
	{
	    val = -val;
	}
        return val;
    }
    //arctan (1/x) = 0.5 * pi - arctan(x) [x > 0]
    if (x >= 1)
    {
        val = 3.141926/2 - arctan(1/x);
	if (flag == 1)
	{
	    val = -val;
	}
        return val;	
    }
}


int main()
{   
    float f = -123535;
    float val = arctan(f);
    printf("val = %f", val);
    return 0;
}
