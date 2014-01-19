// A structure is a programmer-defined data type \ 
// made up of variables of other data types (possibly including other structure types).

// The size of a structure type is equal to the sum of the size of all of its members, \
// possibly including padding to cause the structure type to align to a particular byte boundary. 
// The details vary depending on your computer platform, 
// but it would not be atypical to see structures padded to align on four- or eight-byte boundaries. \ 
// This is done in order to speed up memory accesses of instances of the structure type.

#include <stdio.h>

int main (int argc, char** argv) {
  struct point {
    int x, y;
  }; // first_point, second_point;
     // first_point = { 5, 10 };

  // struct point first_point, second_point;
  // struct point first_point = { 5, 10 };
  // struct point first_point = { .x = 5, .y = 10 };
  // struct point first_point = { x: 5, y: 10 };

  struct rectangle {
    struct point top_left;
    struct point bottom_right;
  };

  struct rectangle my_rectangle = { { 0, 5 }, { 10, 0 } };

  my_rectangle.top_left.x = 2;

  return (0);
}
