/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: Use the modulus operator.
 *
 */
#include <stdio.h>

int main (int argc, char** argv) {
  int guzinta;
  int rem;

  guzinta = 25 / 5;
  rem = 25 % 5;

  printf("5 goes into 25 %i times with remainder %i\n", guzinta, rem);

  guzinta = 25 / 7;
  rem = 25 % 7;

  printf("7 goes into 25 %i times with remainder %i\n", guzinta, rem);

  return 0;
}
