close all; clear all
x = chebfun('x'); f = abs(x);
for n = 2:2:4
  figure()
  subplot(1,2,1), hold off, plot(f,'k','LineWidth',2), grid on
  [p,err] = minimax(f,n);hold on,plot(p,'r','LineWidth',2),axis([-1 1 -.2 1.2])
  FS = 'fontsize';
  title(['Function and best approx, n = ' int2str(n)],FS,9)
  subplot(1,2,2), hold off, plot(f-p,'LineWidth',2), grid on, hold on
  axis([-1 1 -.15 .15]), title('Error curve',FS,9)
  plot([-1 1],err*[1 1],'--k'), plot([-1 1],-err*[1 1],'--k')
end
