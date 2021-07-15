set logscale y
set title 'Case of double root'
set ylabel 'Error'
set xlabel 'Iteration number'
p 'newt_double.out' u 1:2 t 'Newton' w lp pt 6 lw 2, \
  'newt_double.out' u 1:3 t 'Modified Newton' w lp pt 4 lw 2
