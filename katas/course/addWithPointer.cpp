#include<stdio.h>
 
main()
{
   int f, s, *p, *q, sum;
 
   printf("Enter two integers to add\n");
   scanf("%d%d", &f, &s);
 
   p = &f;
   q = &s;
 
   sum = *p + *q;
 
   printf("Sum of entered numbers = %d\n",sum);
 
   return 0;
}
