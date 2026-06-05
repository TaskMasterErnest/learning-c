// using scanf in a different way
#include <stdio.h>

int main(void)
{
    int num;
    float numf;
    printf("Enter an integer and an floating point number: ");
    scanf("%d %f", &num, &numf);

    printf("%d\t\t\t%f\n", num, numf);

    return 0;
}