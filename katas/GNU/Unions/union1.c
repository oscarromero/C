// A union is a custom data type used for storing several variables in the same memory space.
// The size of the union data type is the same as sizeof (double), \
// because the double type is larger than the int and float types.

#include <stdio.h>

int main (int argc, char** argv) {
  union numbers {
    int i;
    float f;
    double d;
  }; // first_number, second_number;
     // first_number = { 5 };

  // union numbers first_number, second_number;

  union numbers first_number = { 5 };
  //union numbers second_number = { f: 3.70 };
  union numbers second_number = { .f = 3.70 };
  union numbers third_number = { .d = 4.30 };

  first_number.f = 2.0;
  first_number.d = 3.20;

  return (0);
}
