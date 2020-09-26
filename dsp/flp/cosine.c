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
    float val = 1 - (x*x)/fact2 + (x*x*x*x)/fact4 - (x*x*x*x*x*x)/fact6;
    return val;
}

int main()
{   
    float input = 0.567;
    float val = cosine(input);
    printf("Cos(%f) = %f\n", input, val);    
    return 0;
}
