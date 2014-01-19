/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: This program sum two numbers.
 *
 */
#include <stdio.h>

int main (int argc, char** argv) {
  int a, b;
  int total;

  printf("Type a number between 0 and 9: ");
  scanf("%i", &a);

  printf("Type another number between 0 and 9: ");
  scanf("%i", &b);

  total = a + b;
  printf("The sum of %i + %i => %i\n", a, b, total);

  return 0;
}
