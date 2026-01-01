#include <stdio.h>

void butler(void); // ANSI/ISO C function prototyping

int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes, bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void) // start of function definition
{
    printf("Yes, you rang sir?\n");
}
