#include <stdio.h>

int main (int argc, char** argv) {
  typedef union {
    int i;
    float f;
  } Numbers;

  Numbers foo = { 4 };
  Numbers *bar = &foo;

  printf("%i\n", foo.i);
  printf("%i\n", bar -> i);

  bar -> i = 450;

  printf("%i\n", foo.i);
  printf("%i\n", bar -> i);

  return (0);
}
