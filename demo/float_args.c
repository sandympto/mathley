/******************************************************************************
 * filename : float_args.c
 * author   : Sandeep Tayal
 * email    : sandympto@gmail.com 
 *****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{   
    float f = 0;
    f = atof(argv[1]);
    printf("float value  = %f", f);
    return 0;
}
