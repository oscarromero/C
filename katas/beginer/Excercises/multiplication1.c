/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: This program multiplicates with a integer result.
 *
 */
#include <stdio.h>

int main (int argc, char** argv) {
  int a = 7;
  int b = 9;
  int c = 19;
  int d = 5;
  int e = 2;
  int answer;

  float f = 9.7e-8;
  float g = 2.01e3;
  float h = 8.9e4;
  float i = 23.0;
  float numerator;
  float denominator;
  float result;

  answer = ( a * b ) + ( ( c / d ) % e );

  printf("%i = ( %i * %i ) + ( ( %i / %i ) %% %i )\n", answer, a, b, c, d, e);

  numerator = f + g;
  denominator = h * i;

  printf("numerator = %e\n", numerator);
  printf("denominator = %e\n", denominator);

  result = numerator / denominator;

  printf("Result = %e\n", result);

  return 0;
}
