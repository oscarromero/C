#include <stdio.h>

int main (int argc, char** argv) {
  int i;
  int array[5] = { 23, 17, 29, 3, -7 };

  for (i = 0; i <= 4; i++) {
    printf("Array[%i] = %i\n", i, array[i]);
  }

  /* Print out values in array and beyond boundaries of. */
  for (i = -4; i < 10; i++) {
    printf("Array[%i] = %i\n", i, array[i]); 
  }

  return 0;
}
