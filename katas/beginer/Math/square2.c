/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: Program to calculate squares.
 *
 */
#include <stdio.h>

int main (int argc, char** argv) {
  int square;
  int n;

  printf("TABLE OF SQUARES NUMBERS \n\n");
  printf("\t n \t n squared\n");
  printf("\t---\t---------\n");

  for (n = 1; n <= 20; n++) {
    square = n * n;

    printf("\t %i \t %i \n", n, square);
  }
  printf("\t---\t---------\n");

  n = 0;
  while (n <= 20) {
    square = n * n;

    printf("\t %i \t %i \n", n, square);
    n++;
  }
  printf("\t---\t---------\n");

  for (int i = 1; i <= 20; i = i + 2) {
    square = 10 * i;
    printf("\t %i * %i \t %i \n", 10, i, square);
  }

  return 0;
}
