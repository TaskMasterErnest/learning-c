// check what my system does with integer overflow, floating-point overflow and floating-point underflow

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    int integer_high = INT_MAX;
    float floating_point_high = FLT_MAX;
    float floating_point_low = FLT_MIN;
    
    // to trigger a integer overflow, you add +1 to it
    printf("The integer overflow is: %d\n", integer_high + 1);
    // to trigger a floating point overflow, multiply the max value but a value that will double the value
    printf("The floating point max overflow is: %e\n", floating_point_high * 2.00f);
    // to trigger a floating point undeflow, divide the min value by a very large value so that you get something infinitesmal
    // enough so that it will be impossible to correctly represent
    printf("The floating point underflow is: %e\n", floating_point_low / 1000000000.00f);

    return 0;
}