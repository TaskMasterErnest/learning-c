// using a prefix vs a postfix

#include <stdio.h>

int main(void)
{
    int a = 1, b = 1;
    int a_post, pre_b;

    a_post = a++;
    pre_b = ++b;

    printf("a\ta_post\tb\tpre_b\n");
    printf("%d\t%d\t%d\t%d\n", a, a_post, b, pre_b);\

    return 0;
}