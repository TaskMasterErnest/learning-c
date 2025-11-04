// Add tax to dollar-and-cent value
#include <stdio.h>

#define TAX_CALC (105.0f / 100.0f)

int main(void)
{
  float amount, new_amount;

  // get user input for amount
  printf("Enter the dollar-and-cent amount: ");
  scanf("%f", &amount);

  // add tax of 5%
  new_amount = (TAX_CALC * amount);

  printf("With tax added: %.2f\n", new_amount);

  return 0;
}