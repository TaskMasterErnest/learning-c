// a program that takes in an integer and returns the character having that ASCII code

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an ASCII code value: \n");
    scanf("%d", &number);

    printf("The character for that ASCII code is: %c\n", number);

    return 0;
}