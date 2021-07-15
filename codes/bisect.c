#include<stdio.h>
#include<math.h>

float fsqroot(float);

int main(){
   float eps = 1.0e-6;
   float a, b, c;
   float fa, fb, fc;

   a = 2.0;
   b = 4.0;

   fa = fsqroot(a);
   fb = fsqroot(b);
   while( fabs(b-a) > eps){
      c = 0.5*(a + b);
      if(c==a || c==b){
         break;
      }
      fc = fsqroot(c);
      if(fc==0.0) break;
      if( fc*fb < 0){
         a = c; fa = fc;
      }else{
         b=c; fb = fc;
      }
   }
   printf("root = %24.16e\n", c);
}

float fsqroot(float x){
   return x*x - 10.0;
}
