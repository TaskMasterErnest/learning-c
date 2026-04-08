// program that presents volumes in the U.S. system of volume measurements

#include <stdio.h>

int main(void)
{
    int volume_in_cups;
    
    printf("Enter the volume in cups: ");
    scanf("%d", &volume_in_cups);
    
    float pints = volume_in_cups / 2.0;
    int ounces = volume_in_cups * 8;
    int tablespoons = ounces * 2;
    int teaspoons = tablespoons * 3;
    
    printf("The %d cup(s) in ounces is: %d ounces.\n", volume_in_cups, ounces);
    printf("The %d cup(s) in pints is: %.1f pints.\n", volume_in_cups, pints);
    printf("The %d cup(s) in tablespoons is %d tablespoons.\n", volume_in_cups, tablespoons);
    printf("The %d cup(s) in teaspoons is %d teaspoons.\n", volume_in_cups, teaspoons);

    return 0;
}