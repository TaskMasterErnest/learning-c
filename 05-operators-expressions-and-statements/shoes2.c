// converts shoe sizes to inches using a loop
#include <stdio.h>
#define ADJUST 7.31

int main(void)
{
    const double SCALE = 0.333;
    double foot, shoe;

    printf("Shoe size (men's)\tfoot length\n");
    shoe = 3.0;
    // starting the loop
    while (shoe < 18.5)
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f\t%15.2f (inches)\n", shoe, foot);
        // increase the value of foot by 1
        shoe = shoe + 1.0;
    }
    
    printf("If the shoe fits, wear it.\n");

    return 0;
}