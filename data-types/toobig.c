// exceeding the maximum int size on a system
#include <stdio.h>
//#include <limits.h> // using this provides the max unsigned int value

int main(void)
{
    // declare the int values
    int i = 2147483647;
    unsigned int j = 4292967295;
    // unsigned int j = UINT_MAX;

    // stretch them past their limits
    printf("%d %d %d\n", i, i+1, i+2);
    printf("%u %u %u\n", j, j+1, j+2);

    return 0;
}