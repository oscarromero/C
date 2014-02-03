#include <stdio.h>

int main ()
{
   int  a = 200;   
   int  *b;        /* pointer variable declaration */

   b = &a;  

   printf("Address of a variable: %x\n", &a  );

   printf("Address stored in b variable: %x\n", b );

   printf("Value of *b variable: %d\n", *b );

   return 0;
}
