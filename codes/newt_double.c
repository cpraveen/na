#include<stdio.h>
#include<math.h>

#define ITMAX 100
#define REAL double

REAL fsqroot(REAL);
REAL fsqroot_d(REAL);

int main(){
   int it;
   REAL eps = 1.0e-6;

   REAL x, x2, fd, fd2, root;
   FILE *fid;

   x = x2 = 2.0;

   root = M_PI;

   fid = fopen("newt_double.out", "w");
   for(it=1; it<ITMAX; it++){

      fd  = fsqroot_d( x );
      if(fabs(fd)>0.0) x  = x -        fsqroot( x ) / fd;

      fd2 = fsqroot_d( x2);
      if(fabs(fd2)>0.0) x2 = x2 - 2.0 * fsqroot( x2) / fd2;

      fprintf(fid,"%d %24.16e %24.16e\n", it, fabs(x-root), fabs(x2-root));
   }
   fclose(fid);
}

REAL fsqroot(REAL x){
   return (x - M_PI)*(x - M_PI)*exp(x);
}

REAL fsqroot_d(REAL x){
   return (x - M_PI)*(x - M_PI)*exp(x) + 2.0*(x-M_PI)*exp(x);
}
