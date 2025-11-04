// This program converts temperature from Fahrenheit to Celsius

#include <stdio.h>

// this is a macro.
// A macro holds a piece of code.
// At compile time, the compiler places the content of the macro into the code.
#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
  // define the types
  float fahrenheit, celsius;
  // get temp data from input
  printf("Enter the temperature in Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;

  printf("Celsius equivalent: %.1f\n", celsius);

  return 0;
}