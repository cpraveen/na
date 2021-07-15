%function root = bisect(a,b,eps)
% [a,b] = initial nontrivial bracket containing a root
a  = 2.0;
b  = 4.0;
eps = 1.0e-6; % convergence criterion

fa = fsqroot(a);
fb = fsqroot(b);

while abs(b-a) > eps
   c = (a+b)/2;
   disp(c);
   if c==a || c==b
      break;
   end
   fc = fsqroot(c);
   if fc==0.0
      break;
   end
   if sign(fc) ~= sign(fb)
      a = c; fa = fc;
   else
      b = c; fb = fc;
   end
end

%root = 0.5*(a + b);
%
%end
