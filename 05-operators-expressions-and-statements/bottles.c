// classic road song

#include <stdio.h>
#define MAX 100

int main(void)
{
    int count = MAX + 1;

    while(--count > 0)
    {
        printf("%d bottles of milk on the wall, "
            "%d bottles of milk!\n", count, count);
        printf("Take one down, pass it around.\n");
        printf("%d bottles of milk on the wall.\n", count - 1);
    }

    return 0;
}