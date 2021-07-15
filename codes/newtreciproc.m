% Find root of 
% f(x) = 1/x - a

a = 1.0e-10;
x = 1.0e-10;

% exact root
xr = 1/a;

for i=1:100
   xo = x;
   x  = 2*xo - a*xo^2;
   r  = (xr - x)/(xr - xo)^2;
   fprintf(1,'%d %6.3e %6.3e\n', i, x, x/xo);
end
