// diff between sizeof and strlen()

#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[] = "Systems Programming";

    printf("Sizeof output: %zd\n", sizeof string);
    printf("Strlen output: %zd\n", strlen(string));

    return 0;
}