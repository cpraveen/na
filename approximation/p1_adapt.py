from numpy import zeros,linspace,exp,sin,pi,polyfit,max,argmax,abs,concatenate
from matplotlib.pyplot import plot,title,show

xmin, xmax = 0.0, 1.0
fun = lambda x: exp(-100*(x-0.5)**2);
fun = lambda x: exp(-100*(x-0.5)**2) * sin(4*pi*x)

N = 10 # number of initial points
x = linspace(xmin,xmax,N)
f = fun(x)

ne = 100
xe = linspace(xmin,xmax,ne)
fe = fun(xe)
plot(xe,fe,'-',x,f,'or--',linewidth=2);
title('Initial approximation')
show()

err = 1e-2    # error tolerance
nadapt = 50   # maximum number of refinements
mode = 1      # 0=uniform, 1=adaptive

for n in range(nadapt):
   h = x[1:] - x[0:-1]
   H = zeros(N-1)
   for j in range(1,N-2): # skip first and last element
      P = polyfit(x[j-1:j+3], f[j-1:j+3], 3)
      H[j] = max(abs(6*P[0]*x[j:j+2] + 2*P[1]))
 
   elem_err = (1.0/8.0) * h**2 * abs(H)
   i = argmax(elem_err); current_err = elem_err[i]
   if current_err < err:
      print('Satisfied error tolerance')
      break
   if mode == 0:
      x = linspace(xmin,xmax,2*N)
      f = fun(x)
   else:
      x = concatenate([x[0:i+1], [0.5*(x[i]+x[i+1])], x[i+1:]])
      f = concatenate([f[0:i+1], [fun(x[i+1])], f[i+1:]])
   N = len(x)
   plot(xe,fe,'-',x,f,'or--',linewidth=2); show()

print('Number of points = %d' % N)
