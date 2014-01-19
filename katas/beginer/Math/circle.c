#include <stdio.h>
#include <math.h>

#define PI 3.14

int main () {
  double radius = 5.0;
  double circumference;
  double area;

  circumference = PI * 2 * radius; // Circumference of a circle.
  area = PI * pow(radius, 2.0); // Area of a circle.

  printf("Radius: %g\n", radius);
  printf("Circumference: %g\n", circumference);
  printf("Area: %g\n", area);
}
