// program that produces an alert and prints a statement

#include <stdio.h>

int main(void)
{
    char beep = '\a';

    printf("%c", beep);
    printf("Startled by the sudden sound, Sally shouted,\n\"By the Great Pumpkin, what was that!\"\n");
    
    return 0;
}