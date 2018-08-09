#include<stdio.h>
#include<math.h>

#define REAL float

int main()
{
   REAL one   = 1.0;
   REAL delta = 1.0;
   REAL x;

   x = one + delta;
   while(x > one)
   {
      delta /= 2;
      x = one + delta;
   }

   printf("Unit round = %20.14e\n", delta);
}
