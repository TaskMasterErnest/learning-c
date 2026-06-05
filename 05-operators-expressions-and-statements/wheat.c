// counting wheat

#include <stdio.h>
#define SQUARES 64

int main(void)
{
    const double CROP = 3.09E16;
    double current, total;
    int count = 1;

    printf("square\t\tgrains\t\ttotal\t\tfraction of\n");
    printf("\t\tadded\t\tgrains\t\tworld total\n");

    // starting with one grain
    total = current = 1.0;
    printf("%4d\t%13.2e\t%12.2e\t%12.2e\n", count, current, total, total/CROP);

    while (count < SQUARES)
    {
        // increment count by 1
        count = count + 1;

        // get the current number of grains, and then double it
        current = 2.0 * current;

        // get the total number of grains from current, update the total value
        total = total + current;

        printf("%4d\t%13.2e\t%12.2e\t%12.2e\n", count, current, total, total/CROP);
    }

    printf("This is what the scholar requested for by the way\n");

    return 0;
}