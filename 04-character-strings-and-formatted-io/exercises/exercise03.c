// a program that sounds an unprintable value

#include <stdio.h>
#include <string.h>

int main(void)
{
    // get the beep character
    char BEEP = '\a';

    printf("%c", BEEP);
    printf("Startled by the sudden sound, Sally shouted,\n");
    printf("\"By the Great Pumpkin, what was that!\"\n");

    return 0;
}