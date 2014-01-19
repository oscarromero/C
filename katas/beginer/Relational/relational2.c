/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: Use a custom = operator.
 *
 */
#include <stdio.h>

#define EQUALS ==

int main (int argc, char** argv) {
  int x = 0;
  int y = 1;

  if (x EQUALS y) {
    printf("x and y are equals.\n");
  } else {
    printf("x and y not equals.\n");
  }

  return 0;
}
