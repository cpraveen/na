x  = 2.0;      % initial guess of root
xo = x + 1;    % old value of root
eps = 1.0e-6;  % convergence criterion
maxiter=100;   % maximum number of iterations

iter = 0; % iteration counter
while abs(x-xo) > eps && iter < maxiter
   xo= x;
   fo = fsqroot(xo);
   fdo= fsqroot_d(xo);
   x = xo - fo/fdo;
   iter = iter + 1;
   fprintf(1,'iter = %d, root = %20.16e\n', iter, x);
end
