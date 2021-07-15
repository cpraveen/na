clear all
a = 2.5;
n = 100;

x = zeros(n,1);
x(1) = 0.2;

for j=2:n
   x(j) = a * (1 - x(j-1)) * x(j-1);
end

plot(x,'o-')
