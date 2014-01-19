#include <stdio.h>

int main (int argc, char** argv) {
  int a[5];

  a[2] = 25;

  int b[] = {1, 2, 3, 4, 5};

  for (int i = 0; i < 5; i++) {
    printf("%i\n", b[i]);
  }

  return 0;
}