#include<stdio.h>
#include<math.h>

#define ITMAX 100
#define REAL double

REAL fsqroot(REAL);
REAL fsqroot_d(REAL);

int main(){
   int it;
   REAL eps = 1.0e-6;
   REAL a, b, c;
   REAL fa, fb, fc;

   REAL x, root;
   FILE *fid;

   a = -1.0;
   b = +1.0;

   x = -1.0;

   root = sqrt(10.0);
   root = 1.0204614741244183e-02;

   fid = fopen("bis_newt.out", "w");
   fa = fsqroot(a);
   fb = fsqroot(b);
   for(it=1; it<ITMAX; it++){
      c = 0.5*(a + b);
      fc = fsqroot(c);
      if( fc*fb < 0){
         a = c; fa = fc;
      }else{
         b=c; fb = fc;
      }

      x = x - fsqroot( x ) / fsqroot_d( x );

      fprintf(fid,"%d %24.16e %24.16e\n", it, fabs(c-root), fabs(x-root));
      //fprintf(fid,"%d %24.16e %24.16e\n", it, c, x);
   }
   fclose(fid);
}

REAL fsqroot(REAL x){
   //return x*x - 10.0;
   return exp(x) - 99.0*x;
}

REAL fsqroot_d(REAL x){
   //return 2.0*x;
   return exp(x) - 99.0;
}
