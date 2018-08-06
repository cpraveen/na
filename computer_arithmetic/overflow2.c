#include<stdio.h>
#include<math.h>

int main()
{
   float x=1.0e20, y=1.0e20;
   float z;
   float alpha;

   z = sqrt(x*x + y*y);

   printf("sqrt(x*x+y*y)           = %e\n", z);

   alpha = y/x;
   z = fabs(x) * sqrt(1.0 + alpha*alpha);
   printf("|a|*sqrt(1+(y/x)*(y/x)) = %e\n", z);
}
