#include <stdio.h>

int main (void) {

  union clave {
    char telefono[10];
    long hash;
    int id;
  } c;

  //c.telefono = "555 555555";
  c.hash = 1234567890;
}