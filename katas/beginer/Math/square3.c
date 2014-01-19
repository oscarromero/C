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
  int cube;
  int n;
  int user_number;

  printf("How far do you want to go to?\n");
  scanf("%i", &user_number);

  printf("\nYou entered %i \n\n", user_number);
  printf("TABLE OF SQUARES & CUBES\n\n");
  printf("\t n \t n squared \t n cubed\n");
  printf("\t---\t-----------\t---------\n");

  for (n = 1; n <= user_number; n++) {
    square = n * n;
    cube = square * n;

    printf("\t %i \t %i \t\t %i\n", n, square, cube);
  }

  return 0;
}
