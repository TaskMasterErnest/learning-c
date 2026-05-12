// printing the strlen of a string

#include <stdio.h>
#include <string.h>

#define PRAISE "You are a wonderful being."

int main(void)
{
    char name[40];

    printf("What is your name: ");
    scanf("%s", name);

    printf("Hey! %s, %s\n", name, PRAISE);

    printf("Your name of %zd letters and occupies %zd memory cells.\n", strlen(name), sizeof name);
    printf("The phrase of praise has %zd letters and occupies %zd memory cells.\n", strlen(PRAISE), sizeof PRAISE);

    return 0;
}