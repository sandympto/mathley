/******************************************************************************
 * filename : cosine.c
 * author   : Sandeep Tayal
 * email    : sandympto@gmail.com 
 *****************************************************************************/
#include <stdio.h>

float cosine(float x)
{	
    int fact2 = 2*1;
    int fact4 = 4*3*2*1;
    int fact6 = 6*5*4*3*2*1;
    int fact8 = 8*7*6*5*4*3*2*1;
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
        x = (2*3.14 - x);
    }

    else if(x < -3.14)
    {
        x = (x + 2*3.14);    
    }

    float val = 1 - (x*x)/fact2 + (x*x*x*x)/fact4 - (x*x*x*x*x*x)/fact6 + (x*x*x*x*x*x*x*x)/fact8;
    return val;
}

int main()
{   
    float f = -2*3.14;
    float PI = 3.14;
    while(f < 2*PI)
    {	    
        float val = cosine(-3*f);
        printf("%f ", val);
        f = f + 0.01;	
    }
    return 0;
}

