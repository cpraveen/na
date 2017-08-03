#include<stdio.h>
#include<math.h>

int main()
{
   float one=1.0;
   float delta=pow(2.0,-23);
   float delta1=pow(2.0,-24);
   float x1, x2;

   printf("one           = %50.40e\n", one);
   x1 = one+delta;
   printf("one + delta   = %50.40e\n", x1);
   x2 = one+delta1;
   printf("one + delta/2 = %50.40e\n", x2);

}
