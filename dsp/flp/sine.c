/******************************************************************************
 * filename : sine.c
 * author   : Sandeep Tayal
 * email    : sandympto@gmail.com 
 *****************************************************************************/

#include <stdio.h>

float sine(float x)
{	
    int fact3 = 3*2*1;
    int fact5 = 5*4*3*2*1;
    int fact7 = 7*6*5*4*3*2*1;
    int fact9 = 9*8*7*6*5*4*3*2*1;

    while(x > 6.28)
    {
	x = x - 6.28;
    }

    while(x < -6.28)
    {
	x = x + 6.28;
    }

    if (x > 3.14)
    {
        x = -(x - 3.14);
    }

    else if(x < -3.14)
    {
        x = -(x + 3.14);    
    }

    float val = x - (x*x*x)/fact3 + (x*x*x*x*x)/fact5 - (x*x*x*x*x*x*x)/fact7 + (x*x*x*x*x*x*x*x*x)/fact9;
    return val;
}

int main()
{   
    float f = 0;
    float PI = 3.14;
    while(f < 2*PI)
    {	    
        float val = sine(-3*f);
        printf("%f ", val);
        f = f + 0.01;	
    }
    return 0;
}
