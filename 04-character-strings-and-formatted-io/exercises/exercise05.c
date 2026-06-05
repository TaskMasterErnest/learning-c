// using character arrays to store strings

#include <stdio.h>

int main(void)
{
    char name[40];

    printf("What is your name: ");
    scanf("%s", name);

    printf("\"%s\"\n", name);

    return 0;
}