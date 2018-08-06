#include<stdio.h>
#include<math.h>

#define REAL float

int main()
{
   REAL one   = 1.0;
   REAL delta = 1.0;

   while(one + delta > one)
      delta /= 2;

   printf("Unit round = %20.14e\n", 2*delta);
}
