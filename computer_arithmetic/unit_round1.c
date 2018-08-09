#include<stdio.h>
#include<math.h>

int main()
{
   float one=1.0;
   float u=pow(2.0,-24);
   float x1, x2, x3;

   x1 = one + u;
   x2 = one + 1.000001*u;
   x3 = one + 2.0*u;

   printf("u                = %50.40e\n", u);
   printf("one              = %50.40e\n", one);
   printf("one + u          = %50.40e\n", x1);
   printf("one + 1.000001*u = %50.40e\n", x2);
   printf("one + 2*u        = %50.40e\n", x3);
}
