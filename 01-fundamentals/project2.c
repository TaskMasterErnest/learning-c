// Calculate volume of a sphere
#include <stdio.h>

#define PI 3.142f
#define SCALE_FACTOR (4.0f / 3.0f)

int main(void)
{
  float radius, volume;

  // get radius from input
  printf("Enter the radius of the sphere: ");
  scanf("%f", &radius);

  volume = (SCALE_FACTOR * PI * (radius * radius * radius));

  printf("Spherical Volume: %.1f\n", volume);

  return 0;
}