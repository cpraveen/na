#include<stdio.h>
#include<math.h>

int main()
{
   float x=1.0e-8;
   float y, z;


   y = 1.0 - cos(x);
   z = 2.0*pow(sin(x/2.0), 2);

   printf("y = %40.30e\n", y);
   printf("z = %40.30e\n", z);
}
