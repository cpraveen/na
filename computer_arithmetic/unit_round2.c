#include<stdio.h>
#include<math.h>

int main()
{
   float one   = 1.0;
   float delta = 1.0;

   while(one + delta > one)
      delta /= 2;

   printf("Unit round = %20.14e\n", 2*delta);
}
