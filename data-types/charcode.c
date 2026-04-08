// this program displays code number for a number
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter a letter/character: ");
    scanf("%c", &ch);
    printf("The code for %c is %d.\n", ch, ch);

    return 0;
}