#include <stdio.h>

void func1(void);

int main (int argc, char** argv) {
  extern int customers;
  customers = 1;

  func1();

  return (0);
}

void func1(void) {
}
