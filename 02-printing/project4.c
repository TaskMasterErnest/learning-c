// Program that displays telephone number in a certain format.

#include <stdio.h>

int main(void)
{
  int network, middle, end;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &network, &middle, &end);

  printf("You entered %d.%d.%d\n", network, middle, end);
  return 0;
}