// golf tournament scorecard
#include <stdio.h>

int main(void)
{
    int jane, tarzan, cheeta;

    cheeta = tarzan = jane = 68; // C accepts the triple assignment.

    printf("\t\tcheeta  tarzan  jane\n");
    printf("First round score: %4d %8d %8d\n", cheeta, tarzan, jane);

    return 0;
}