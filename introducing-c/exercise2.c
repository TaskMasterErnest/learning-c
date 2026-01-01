#include <stdio.h>

int main(void)
{
    int AGE, DAYS_IN_AGE;

    // get age from input
    printf("Enter your age: ");
    scanf("%d", &AGE);

    DAYS_IN_AGE = AGE * 365;

    printf("You have spent at least %d days on earth so far.\n", DAYS_IN_AGE);

    return 0;
}
