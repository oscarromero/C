#include <stdio.h>
 
int main ()
{
   int  a;
   int  *ptr;
   int  **pptr;

   a = 3;

   ptr = &a;

   pptr = &ptr;

   printf("Value of a = %d\n", a );
   printf("Value available at *ptr = %d\n", *ptr );
   printf("Value available at **pptr = %d\n", **pptr);

   return 0;
}
