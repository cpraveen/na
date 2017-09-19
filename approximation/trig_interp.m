clear all; close all

% Function to approximate
fun = @(x) max(0,1-abs(x-pi)/2); 
fun = @(x) exp(sin(x));

N = 24; 
h = 2*pi/N; 
x = h*(0:N-1)';
v = fun(x);

% Compute DFT using FFT
v_hat = fft(v);
k = [0:N/2, -N/2+1:-1];

% Plot on a finer grid
ng = 100;
xg = linspace(0,2*pi,ng);
fg = exp(1i*xg'*k) * v_hat / N;
fg = real(fg);
plot(x,v,'o',xg,fg,'-',xg,fun(xg),'--')
legend('Data','DFT','Exact')
grid on
