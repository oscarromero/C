#include <math.h>
#include "polinomio.h"

float a, b, c;

float raiz1 () {
  return (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}

float raiz2 () {
  return (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
}

void raices (float *pr1, float *pr2) {
  *pr1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
  *pr2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
}