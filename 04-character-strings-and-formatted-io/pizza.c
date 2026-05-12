// using defined constants in a pizza context

#include <stdio.h>
#define PI 3.14159

int main(void)
{
    float area, circum, radius;

    printf("What is the radius of the said pizza? ");
    scanf("%f", &radius);

    // getting the area
    area = PI * radius * radius;
    // getting the circumference
    circum = 2 * PI * radius;

    printf("Your pizza-related parameters are: \n");
    printf("Circumference = %.2f, area = %.2f \n", circum, area);

    return 0;
}