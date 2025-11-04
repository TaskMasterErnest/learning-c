// Calculating the dimensional weight of a given box
// input will be given to compute
#include <stdio.h>

int main(void)
{
  // declare the variables to be used
  int height, length, width, volume, weight;

  // ask for input and store value in appropriate variable
  printf("Enter the height of the box: ");
  scanf("%d", &height);
  printf("Enter the length of the box: ");
  scanf("%d", &length);
  printf("Enter the width of the box: ");
  scanf("%d", &width);

  volume = height * length * width;
  weight = (volume + 165) / 166;

  printf("\n");
  printf("..................Calculating...\n");
  printf("\n");

  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight: %d\n", weight);

  return 0;
}