#include <stdio.h>

int main (int argc, char** argv) {

  enum Dias {
    Lunes,
    Martes,
    Miercoles,
    Jueves,
    Viernes,
    Sabado,
    Domingo
  };

  enum Dias hoy = Martes;

  printf("Hoy es %d\n", hoy);

  return 0;
}