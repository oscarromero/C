#include <stdio.h>

int main (int argc, char** argv) {
  int array[15];

  array[0] = 16;
  array[1] = 7;
  array[2] = 1987;

  for (int i = 0; i <= 2; i++) {
    printf("array[%i] = %i\n", i, array[i]);
  }

  return 0;
}
