// defining PI and calculating stuff

#include <stdio.h>

#define PI 3.141592

int main(void)
{
    float radius;

    printf("Enter a number to represent a radius: ");
    scanf("%f", &radius);

    printf("The circumference of the circle is: %.4f\n", 2*PI*(radius));

    return 0;
}