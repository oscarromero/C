/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: Introduces \a ansi alert character.
 *
 */
#include <stdio.h>

int main (int argc, char** argv) {
  int i;
  int sum = 0;

  while ( i <= 5 ) {
    printf("\a i = %i\n", i);

    sum += i;
    i++;
  }

  printf("Sum from -5 to 5 is %i\n", sum);

  return 0;
}
