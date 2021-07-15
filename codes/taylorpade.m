x=linspace(-1,+1,1000);
yt = 1 + x + 0.5 * x .* x;
yp = (1 + 0.5 * x) ./ (1 - 0.5 * x);
ye = exp(x);

et = abs(ye - yt);
ep = abs(ye - yp);
plot(x,et,'-',x,ep,'--')
