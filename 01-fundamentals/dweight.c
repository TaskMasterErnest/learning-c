// calculate the dimensional weight of a 12" x 10" x 8" box
#include <stdio.h>

int main(void)
{
  // declare the variables to be used; along with type
  int height, length, width, volume, weight;

  // assign the values
  height = 8;
  length = 12;
  width  = 10;
  volume = height * length * width;
  weight = (volume + 165) / 166;

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight: %d\n", weight);

  return 0;
}