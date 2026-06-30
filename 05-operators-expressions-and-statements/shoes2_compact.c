// rewriting the shoes2.c program in a compact form
#include <stdio.h>
#define ADJUST 7.31

int main(void)
{
    const double SCALE = 0.333;
    double foot, shoe;

    printf("Shoe size (men's)\tfoot length\n");
    shoe = 3.0;
    // moving the increment operator into the while condition
    while (++shoe < 18.5)
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f\t%15.2f (inches)\n", shoe, foot);
    }
    
    printf("If the shoe fits, wear it.\n");

    return 0;
}