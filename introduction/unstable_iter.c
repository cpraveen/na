/* Kincaid and Cheney
 * Section 2.3
 * Try both float and double
*/

#include <stdio.h>
#include <math.h>

int main()
{
   double x[100], y[100];
   int i;

   x[0] = y[0] = 1.0;
   x[1] = y[1] = 1.0/3.0;

   for(i=2; i<16; ++i)
   {
      x[i] = (13.0/3.0)*x[i-1] - (4.0/3.0)*x[i-2];
      y[i] = y[i-1]/3.0;
      printf("%6d %24.14f %24.14f %14.8f\n",i,x[i],y[i],fabs(x[i]-y[i])/y[i]);
   }

}
