#include <stdio.h>

int main (int argc, char** argv) {
  struct persona {
    char nombre[100];
    int edad;
  };

  struct persona p1 = {"Oscar Romero", 26};
  printf("Nombre = %s Edad = %i\n", p1.nombre, p1.edad);

  struct persona p2, *pp;

  p2 = p1;
  printf("Nombre = %s Edad = %i\n", p2.nombre, p2.edad);

  pp = &p1;
  pp->edad = 40;

  printf("Nombre = %s Edad = %i\n", pp->nombre, pp->edad);
  printf("Nombre = %s Edad = %i\n", p1.nombre, p1.edad);

}