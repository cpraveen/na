#include<stdio.h>
#include<math.h>

int main()
{
   float x = 1.0;
   int i;

   for(i=1; i<40; ++i)
   {
      x = 10*x;
      printf("%d %e\n",i,x);
   }
}
