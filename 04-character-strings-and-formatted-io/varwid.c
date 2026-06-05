// varwid.c -- uses variable-width output field

#include <stdio.h>

int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width: ");
    scanf("%d", &width);
    printf("The number is: %*d:\n", width, number);

    printf("Enter a width and precision: \n");
    scanf("%d %d", &width, &precision);
    printf("Weight = %*.*f\n", width, precision, weight);

    return 0;
}