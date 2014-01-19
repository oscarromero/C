#include <stdio.h>

int main (void) {
  x:{
    puts("I'm in a block!");
  }

  goto x; // Infinite

  return 0;
}