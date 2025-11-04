// Break down bills
#include <stdio.h>

int main(void)
{
  int amount,bill20,bill10,bill5,bill1;

  // get input from user
  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  // perform bill break
  // divide by $20
  bill20 = amount / 20;
  amount = amount % 20;

  bill10 = amount / 10;
  amount = amount % 10;

  bill5 = amount / 5;
  amount = amount % 5;

  bill1 = amount;

  // print out the result
  printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", bill20, bill10, bill5, bill1);

  return 0;
  
}