/******************************************************************************
 * filename : tan.c
 * author   : Sandeep Tayal
 * email    : sandympto@gmail.com 
 *****************************************************************************/

#include <stdio.h>

/* tan(x) = x + (1/3)x^3 + (2/15)x^5 + (17/315)x^7 */

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

/* ATTENTION: THIS DOES NOT WORK YET */
float tangent(float x)
{
    float val = x + (x*x*x)/3 + ((x*x*x*x*x)*2)/15 + ((x*x*x*x*x*x*x)*17)/315
	    + ((x*x*x*x*x*x*x*x*x)*62)/2835;
    return val;
}

int main()
{   
    float f = 0;
    float PI = 3.14;
    while(f < 2*PI)
    {
        float val = sine(f)/cosine(f);
        printf("%f ", val);
        f = f + 0.01;	
    }
    return 0;
}
