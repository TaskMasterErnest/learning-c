// program to find out how the system handles integer overflow, floating-point overflow and floating-point underflow

#include <stdio.h>
#include <limits.h> // this is for integer values
#include <float.h> // this is for floating-point values

int main(void)
{
    unsigned int i = UINT_MAX;
    float j = LDBL_MAX;
    float k = FLT_MIN;

    printf("This is the result of an integer overflow: %d\n", i + 1);
    printf("This is the result of a float overflow: %f\n", j + 1);
    printf("This is the result of a float underflow: %f\n", k - 1);

    return 0;
}