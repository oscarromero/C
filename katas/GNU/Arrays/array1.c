// An array is a data structure that lets you store one or more elements consecutively in memory. \ 
// In C, array elements are indexed beginning at position zero, not one.

// For standard C code, the number of elements in an array must be positive.

// If you initialize every element of an array, \
// then you do not have to specify its size; \
// its size is determined by the number of elements you initialize.

#include <stdio.h>

int main (int argc, char** argv) {

  int array1[5];
  int array2[6] = { 0, 1, 2, 3, 4, 5 };
  int array3[5] = { 0, 1, 2 };

  // When using either ISO C99, or C89 with GNU extensions, \ 
  // you can initialize array elements out of order, \
  // by specifying which array indices to initialize. 
  // To do this, include the array index in brackets, and \ 
  // optionally the assignment operator, before the value.
  int array4[4] = { [1] 1, [3] 2, [0] 0, [2] 5 };
  // (0, 1, 5, 2);

  int array5[5] = { [2] = 5, [4] = 9 };
  // (0, 0, 5, 0, 9);

  struct point {
    int x, y;
  };

  struct point my_points[2] = { { 4, 5 }, { 8, 9 } };
  my_points[0].x = 10;

  /* Array of Arrays */
  int array6[2][5] = { { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9, 0 } };

  for(int i = 1; i <= 2; i++) {
    printf("%i\n", i);
    for(int j = 0; j < 5; j++) {
      printf("\t%i\n", j);
    }
  }

  return (0);
}
