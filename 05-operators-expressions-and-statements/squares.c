// getting the squares of the first 20 programs.

#include <stdio.h>

int main(void)
{
    int num = 1;

    printf("Number\tSquare\n");

    while (num < 21)
    {
        printf("%3d\t%3d\n", num, num * num);
        num = num + 1;    
    }

    return 0;
}