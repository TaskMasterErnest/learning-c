// expressing a floating point number in different forms

#include <stdio.h>

int main(void)
{
    float number;

    printf("Enter a float number/ a number with decimals: \n");
    scanf("%f", &number);

    printf("Decimal-point notation: %f\n", number);
    printf("Exponential-point notation: %e\n", number);
    printf("Memory address of the number: %p\n", (void *)&number);

    return 0;
}