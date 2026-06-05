// skiptwo -- skip over the first two integers of input

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter three integers: \n");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);

    return 0;
}