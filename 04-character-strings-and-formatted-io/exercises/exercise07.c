// read an integer value from terminal

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("%7d\n", num);

    return 0;
}