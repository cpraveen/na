import numpy as np
from scipy.integrate import simps

# Apply Simpson using points {a, (a+b)/2, c}
def simpson1(f,a,b):
    h = 0.5*(b-a)
    c = 0.5*(a+b)
    return (h/3.0)*(f(a) + 4*f(c) + f(b))

# Performs adaptive Simpson to make error < eps
def simpson(f,a,b,eps):
    c = 0.5*(a+b)
    i1 = simpson1(f,a,b)
    i2 = simpson1(f,a,c) + simpson1(f,c,b)
    err = np.abs(i2 - i1)
    if err < eps:
        print('[%12.6g %12.6g] %12.6g %12.6g %12.6g' % (a,b,err,eps,i2))
        return i2
    else:
        ep = 0.5*eps
        return simpson(f,a,c,ep) + simpson(f,c,b,ep)

# Example
f = lambda x: np.sqrt(x)
a, b = 0.0, 1.0
eps = 0.005
I  = simpson(f,a,b,eps)
Ie = 2.0/3.0
print('Integral,err,eps = %16.6e %16.6e %16.6e'%(I,np.abs(I-Ie),eps))

# Simpson rule using uniform sample points
# Choose n to be even only
n, N = 2, 20
for i in range(N):
    x = np.linspace(a, b, n+1)
    y = f(x)
    I = simps(y, x)
    print('%5d %16.6e %16.6e' % (int(n/2),(b-a)/n,np.abs(I-Ie)))
    n = n + 4
