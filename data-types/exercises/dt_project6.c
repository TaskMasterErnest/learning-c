// program to determine the amount of water molecules in a measure of a volume of water

#include <stdio.h>

// define the macros
#define MOLECULAR_MASS_OF_WATER 3.0E-23f
#define GRAMS_IN_QUART 950

int main(void)
{
    int VOLUME,QUART_IN_GRAMS;

    printf("Enter the volume of water in quarts: ");
    scanf("%d", &VOLUME);

    // convert quart to grams
    QUART_IN_GRAMS = VOLUME * GRAMS_IN_QUART;

    printf("In %d quarts of water, there are %E molecules of water.\n", VOLUME, QUART_IN_GRAMS / MOLECULAR_MASS_OF_WATER);

    return 0;
}