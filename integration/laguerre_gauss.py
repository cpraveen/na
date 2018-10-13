import numpy as np

f1  = lambda x: x/(np.exp(x) - 1)
Ie1 = np.pi**2/6.0

f2  = lambda x: x/(1.0 + x**2)**5
Ie2 = 1.0/8.0

f3  = lambda x: 1.0/(1.0 + x**2)
Ie3 = 0.5*np.pi

n=2
for i in range(6):
    x,w = np.polynomial.laguerre.laggauss(n)
    I1 = np.sum(np.exp(x)*f1(x)*w)
    I2 = np.sum(np.exp(x)*f2(x)*w)
    I3 = np.sum(np.exp(x)*f3(x)*w)
    print('%5d %15.6e %15.6e %15.6e' % (n,I1-Ie1,I2-Ie2,I3-Ie3))
    n = 2*n
