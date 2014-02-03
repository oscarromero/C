#include <stdio.h>
void swap(int *x, int *y);
 
int main ()
{
   int a = 100;
   int b = 200;
 
   printf("Before swaping, a is : %d\n", a );
   printf("Before swaping, b is : %d\n", b );
 
   swap(&a, &b);
 
   printf("After swaping, a is: %d\n", a );
   printf("After swaping, b is: %d\n", b );
 
   return 0;
}

void swap(int *x, int *y)
{
   int *t;

   *t= *x; 
   *x = *y;   
   *y = *t; 
  
   return;
}
