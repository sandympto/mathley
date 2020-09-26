/******************************************************************************
 * filename : sine.c
 * author   : Sandeep Tayal
 * email    : sandympto@gmail.com 
 *****************************************************************************/

#include <stdio.h>

float sine(float x)
{
    int fact3 = 6;
    int fact5 = 5*4*3*2*1;
    int fact7 = 7*6*5*4*3*2*1;
    float val = x - (x*x*x)/fact3 + (x*x*x*x*x)/fact5 - (x*x*x*x*x*x*x)/fact7;
    return val;
}


int main()
{   
    float input = 0.567;
    float val = sine(input);
    printf("Sin(%f) = %f\n", input, val);    
    return 0;
}
