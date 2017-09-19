close all; clear all
%
% Compare trignometric and polynomial interpolation of a periodic function
%
%fun = @(x) exp(sin(x));                % inf diff, periodic
%fun = @(x) max(0,1-abs(x-pi)/2);       % cont, diff a.e.
%fun = @(x) ( abs(x-pi) < 0.5*pi ) + 0; % Hat function

ng = 500;
xg = linspace(0,2*pi,ng);
fe = fun(xg);

N = 2.^([3 4 5 6 7 8]);
data = [];
for n=N
   h = 2*pi/n; 
   x = h*(0:n-1)';
   v = fun(x);

   v_hat = fft(v);
   k = [0:n/2, -n/2+1:-1];

   fg = exp(1i*xg'*k) * v_hat / n;
   fg = real(fg);
   err_inf = max(abs(fe - fg'));
   err_l2 = sqrt(sum((fe-fg').^2/n));

   figure(1)
   plot(x,v,'o',xg,fg,'-',xg,fe,'--')
   legend('Data','Trigonometric','Exact')
   title(strcat('N = ',int2str(n)))
   data = [data; n, err_inf, err_l2];
   pause
end

figure(2)
loglog(data(:,1), data(:,2), 'o-', data(:,1), data(:,3),'*-')
legend('Max norm','L_2 norm')
xlabel('log(N)')
ylabel('log(error)')

rate_inf = log(data(1:end-1,2)./data(2:end,2))/log(2)
rate_l2 = log(data(1:end-1,3)./data(2:end,3))/log(2)

figure(3)
semilogy(data(:,1), data(:,2), 'o-', data(:,1), data(:,3),'*-')
legend('Max norm','L_2 norm')
xlabel('N')
ylabel('log(error)')
