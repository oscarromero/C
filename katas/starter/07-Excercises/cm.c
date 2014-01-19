#include <stdio.h>

void mitad (float v, float* res) {
  *res = v / 2;
  v = 6.6;
}

int main (int argc, char** argv) {
  float f1 = 2.5;
  float f2;

  mitad(f1, &f2);

  printf("Mitad de %.2f = %.2f\n", f1, f2);
}