// Computing a polynomial the hard way
#include <stdio.h>

int main(void)
{
  // define the polynomial
  float expression, x;

  // get value of x from input
  printf("Enter the value of x: ");
  scanf("%f", &x);

  expression = ((3 * (x*x*x*x*x)) + (2 * (x*x*x*x)) - (5 * (x*x*x)) - (x*x) + (7 * x) - 6 );

  printf("The value of the polynomial expression when x is %.0f is: %.0f\n", x, expression);

  return 0;
}