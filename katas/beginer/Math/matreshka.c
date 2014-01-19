/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: Ukranian doll for loops.
 *
 */
#include <stdio.h>

int main (int argc, char** argv) {
  int square, n, user_number, counter, i;

  for (counter = 1; counter < 5; counter++) {
    printf("How far do you want to go?\n");
    scanf("%i", &user_number);
    printf("You entered %i\n\n", user_number);
    printf("TABLE OF SQUARES\n\n");
    printf("\t n \t n squared\n");
    printf("\t---\t--------\n");

    /* This loop will be done user_number times. */
    for (n = 1; n <= user_number; n++) {
      square = n * n;
      printf("\t %i \t %i\n", n, square);
    }
  }

  return 0;
}
