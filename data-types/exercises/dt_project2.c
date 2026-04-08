// program that returns a char based off the ASCII code given

#include <stdio.h>

int main(void)
{
    int h;

    printf("Enter the ASCII code for the char you want: \n");
    scanf("%d", &h);
    printf("The char that has ASCII code %d is %c.\n", h, h);

    return 0;
}