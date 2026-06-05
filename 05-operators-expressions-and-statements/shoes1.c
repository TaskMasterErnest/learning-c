// converts a shoe size to inches
#include <stdio.h>
#define ADJUST 7.31

int main(void)
{
    const double SCALE = 0.333;
    double foot, shoe;

    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;

    printf("Shoe size (men's)\tfoot length\n");
    printf("%10.1f\t%15.1f (inches)\n", shoe, foot);

    return 0;
}