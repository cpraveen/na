set logscale y
set title 'Bisection versus Newton'
set ylabel 'Error'
set xlabel 'Iteration number'
p 'bis_newt.out' u 1:2 t 'Bisection' w lp pt 6 lw 2, \
  'bis_newt.out' u 1:3 t 'Newton'    w lp pt 4 lw 2
