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
    float val = 0;
    if (x < 0)
    {
        x = -x;
	flag = 1;
    }
    if (abs(x) < 1)
    {	    
        val = x - (x*x*x)/3 + (x*x*x*x*x)/5 
	    - (x*x*x*x*x*x*x)/7 + (x*x*x*x*x*x*x*x*x)/9 - (x*x*x*x*x*x*x*x*x*x*x)/11
	    + (x*x*x*x*x*x*x*x*x*x*x*x*x)/13;
	if (flag == 1)
	{
	    val = -val;
	}
        return val;
    }
    if (x > 1)
    {
        val = 3.141926/2 - arctan(1/x);
	if (flag == 1)
	{
	    val = -val;
	}
        return val;	
    }
    if (abs(x - 1) < 0.001)
    {
	val = 3.141926/4;
	if (flag == 1)
	{
	    val = -val;
	}
	printf(" hit %f", x);
	return val;
    }
}


int main()
{   
    float f = -1;
    float val = arctan(f);
    while(f < 1)
    {
      val = arctan(f);
      if (abs(val) > 0.001);
      printf("f = %f %f \n", atan(f), val);
      f = f + .01;
    }
    return 0;
}
