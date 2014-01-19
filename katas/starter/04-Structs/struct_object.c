#include <stdio.h>

int main (void) {
  // Persona struct.
  struct persona {
    char nombre[100];
    int edad;
  };

  // Array of personas
  struct persona p[3] = {
    {"Oscar", 26}, 
    {"Rolando", 26}, 
    {"Romero", 26}
  };

  // Loop through personas
  for (int i = 0; i < 3; i++) {
    printf("Nombre = %s Edad= %i\n", p[i].nombre, p[i].edad);
  } 
}