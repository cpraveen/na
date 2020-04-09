# Codes for Numerical Analysis course

## Introduction

1. [Sensitivity of polynomial roots](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/introduction/polyroot1.ipynb)
1. [Parasitic solution: roots of a non-linear equation](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/introduction/parasitic_root.ipynb)
1. [Unstable iterations](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/introduction/unstable_iteration.ipynb), [C version](http://github.com/cpraveen/na/blob/master/introduction/unstable_iter.c)
1. [Solving ODE, stable and unstable iterations](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/introduction/ode.ipynb)

## Computer arithmetic

1. [Store 1/10 and print it to see the conversion of real number to floating number](https://github.com/cpraveen/na/blob/master/computer_arithmetic/precision1.c)
1. [Demonstration of unit round](https://github.com/cpraveen/na/blob/master/computer_arithmetic/unit_round1.c)
1. [Example of overflow error](https://github.com/cpraveen/na/blob/master/computer_arithmetic/overflow1.c)
1. [Example of overflow error and how to avoid it](https://github.com/cpraveen/na/blob/master/computer_arithmetic/overflow2.c)
1. [Errors due to subtracting nearly equal quantities](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/computer_arithmetic/subtract1.ipynb), [C version](https://github.com/cpraveen/na/blob/master/computer_arithmetic/subtract1.c)
1. [Errors due to subtracting nearly equal quantities](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/computer_arithmetic/subtract2.ipynb)
1. [Precision: evaluating polynomial](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/computer_arithmetic/precision1.ipynb)

## Root finding

1. [Bisection method](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/root_finding/bisect.ipynb)
1. [Bisection method: implemented as a function](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/root_finding/bisect2.ipynb)
1. [Newton method](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/root_finding/newton1.ipynb)
1. [Newton method: square root](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/root_finding/newton_square_root.ipynb)
1. [Newton method: reciprocal, slow convergence](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/root_finding/newton_slow.ipynb)
1. [Newton method: complex root](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/root_finding/complex_newton.ipynb)
1. [Newton method for system of equations](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/root_finding/newton3.ipynb)
1. [Secant method](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/root_finding/secant1.ipynb)
1. [Finite difference approximation](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/root_finding/finite_difference.ipynb)
1. [Complex finite difference approximation](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/root_finding/complex_derivative.ipynb)
1. [Fixed point iterations](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/root_finding/fp1.ipynb)
1. [Newton method: double root](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/root_finding/newton2.ipynb)
1. [Root finding by homotopy method](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/root_finding/root_homotopy.ipynb)

## Interpolation and approximation

1. [Condition number of Vandermonde matrix](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/approximation/vandermonde.ipynb)
1. [Using polyfit and polyval to construct polynomial approximation](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/approximation/polyfit.ipynb)
1. [Interpolate cos(x) on uniform points](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/approximation/interp_cos.ipynb)
1. [Runge phenomenon](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/approximation/runge1.ipynb)
1. [Interpolate abs(x) on uniform points](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/approximation/interp_abs.ipynb)
1. [Behavior of function in polynomial interpolation error: uniform points](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/approximation/omega_uniform.ipynb)
1. [Chebyshev polynomials](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/approximation/chebyshev.ipynb)
1. [Behavior of function in polynomial interpolation error: uniform vs Chebyshev points](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/approximation/omega.ipynb)
1. [Roots of Chebyshev polynomial](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/approximation/cheb_roots.ipynb)
1. [Chebyshev points of second kind](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/approximation/chebpts.ipynb)
1. [Barycentric Lagrange interpolation: general point distribution](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/approximation/barycentric_lagrange.ipynb)
1. [Barycentric Lagrange interpolation: Chebyshev points](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/approximation/baryintcheb.ipynb)
1. [Minimax approximation of abs(x)](https://github.com/cpraveen/na/blob/master/approximation/minimax_abs.m)
1. Adaptive piecewise linear interpolation [Matlab](https://github.com/cpraveen/na/blob/master/approximation/p1_adapt.m), [Python](https://github.com/cpraveen/na/blob/master/approximation/p1_adapt.py)
1. [Cubic spline interpolation](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/approximation/cubic_spline.ipynb)
1. [Gibbs oscillations in polynomial interpolation](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/approximation/gibbs_polyint.ipynb)
1.  Trigonometric interpolation: [Matlab](http://github.com/cpraveen/na/blob/master/approximation/trig_interp.m), [Python](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/approximation/trig_interp.ipynb)

## Numerical integration

1. [Composite trapezoidal rule](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/integration/trapz1.ipynb)
1. [Composite corrected trapezoidal rule](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/integration/ctrapz.ipynb)
1. [Composite trapezoidal rule using Scipy](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/integration/trapz2.ipynb)
1. [Composite Simpson rule](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/integration/simpson1.ipynb)
1. [Trapezoid and Simpson rule](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/integration/trapz_simpson.ipynb)
1. [Trapezoid rule when f'' is not finite](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/integration/trapz_singular_derivative.ipynb)
1. [Gauss quadrature using Scipy](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/integration/gauss1.ipynb)
1. [Trapezoidal vs Gauss quadrature of sqrt(x)](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/integration/sing1.ipynb)
1. [Gauss quadrature of sqrt(x-0.5)](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/integration/sing2.ipynb)
1. [Trapezoidal vs Gauss quadrature for periodic function](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/integration/periodic1.ipynb)
1. [Gauss-Laguerre quadrature](https://github.com/cpraveen/na/blob/master/integration/laguerre_gauss.py)
1. [Adaptive Simpson quadrature](https://github.com/cpraveen/na/blob/master/integration/adaptive_simpson.py)

## Solving ODE

1. [Forward Euler](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/ode/euler0.ipynb)
1. [Forward Euler: Error convergence](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/ode/euler1.ipynb)
1. [Trapezoidal method](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/ode/trapezoid1.ipynb)
1. [Instability of multi-step method](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/ode/multistep_instability.ipynb)
1. [Forward/backward Euler: Stability](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/ode/fe_be_stability.ipynb)
1. [Forward Euler: Stability](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/ode/euler2.ipynb)
1. [Absolute stability domains of AB, AM, BDF schemes](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/ode/ode_stability.ipynb)
1. [Stiff ODE](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/ode/stiff1.ipynb)
1. [Stiff ODE: Forward Euler with variable step](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/ode/stiff2.ipynb)
1. [Stiff ODE system: Theta scheme](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/ode/ode_system1.ipynb)
1. [ODE with periodic solution, quadratic invariant](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/ode/periodic1.ipynb)
1. [Non-linear BVP using shooting method](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/ode/shooting.ipynb)
1. [Non-linear BVP using finite difference method](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/ode/finite_difference.ipynb)

## Numerical Linear Algebra

1. [LU decomposition](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/la/lu.ipynb)
1. [LU decomposition with row pivoting](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/la/plu.ipynb)
1. [Thomas tri-diagonal method for 1-d BVP](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/la/thomas.ipynb)
1. [Classical iterative methods for 1-D BVP: Gauss-Jacobi, Gauss-Seidel, SOR](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/la/jacobi_seidel_sor.ipynb)
1. [Classical iterative methods for 2-D BVP: Gauss-Jacobi, Gauss-Seidel, SOR](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/la/poisson2d_iter.ipynb)
1. [QR algorithm](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/la/qr.ipynb)
1. [Conjugate gradient method for 1-D BVP](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/la/cg.ipynb)
1. [Conjugate gradient method for 2-D BVP](http://nbviewer.ipython.org/github/cpraveen/na/blob/master/la/poisson2d_cg.ipynb)

## From the internet

1. [Understanding the FFT algorithm (with Python code)](https://jakevdp.github.io/blog/2013/08/28/understanding-the-fft/)
