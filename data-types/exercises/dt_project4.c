// program read a floating-point number and spits it out in various notations.

#include <stdio.h>

int main(void)
{
    float number;

    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    printf("decimal-point notation: %f\n", number);
    printf("exponential notation: %E\n", number);
    printf("p-notation: %p\n", (void *)&number); // the (void *)&number is how to get the memory address

    return 0;
}