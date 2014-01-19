/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: Shows the use of #ifdef, #else, #endif, #ifndef.
 *
 */
#include <stdio.h>

int main (int argc, char** argv) {
  #ifdef AAA
    printf("Hello from aaa\n");
  #endif

  #ifdef BBB
    printf("Hello from bbb\n");
  #else
    printf("Why you don't like bbb?\n");
  #endif

  #ifndef CCC
    printf("Define CCC to stop me before I print again!\n");
  #endif

  return 0;
}
