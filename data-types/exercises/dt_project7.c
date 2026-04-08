// program to convert height from centimetres to inches (and foot).

#include <stdio.h>

// define macros
#define CENTIMETRES_IN_INCH 2.54
#define INCHES_IN_FEET 12

int main(void)
{
    float height, height_in_inches;
    int height_in_feet, inches;

    printf("Enter your height in centimetres: ");
    scanf("%f", &height);

    height_in_inches = height / CENTIMETRES_IN_INCH;
    height_in_feet = height_in_inches / INCHES_IN_FEET;
    inches = (int)(height_in_inches + 0.5) % INCHES_IN_FEET; // rounding to the nearest inch

    printf("In inches, your height %f cm is %f.\n", height, height_in_inches);
    printf("Converting to feet, you are %d feet, %d inches.\n", height_in_feet, inches);

    return 0;
}