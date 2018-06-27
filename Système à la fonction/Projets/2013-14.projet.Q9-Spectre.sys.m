
%-------------- Tracé des Spectres------------------------------
figure(2);                  
subplot(4,1,1); semilogx(freq,Se,'r'); grid; 
ylabel('Entrée'); title('SPECTRES'); 
xlim([20 10000]);   

subplot(4,1,2); 
semilogx(freq,20*log10(Ss),'b',freq,20*log10(Sss),'c'); 
grid; ylabel ('Passe-bas I et II'); xlim([20 10000]);

subplot(4,1,3); 
semilogx(freq,20*log10(Sz),'b',freq,20*log10(Szz),'c'); 
grid; ylabel ('Passe-bas I et II'); xlim([20 10000]);

subplot(4,1,4); semilogx(freq,20*log10(Sy),'g'); grid; 
ylabel ('Passe-bande'); xlabel('Fréq.(Hz)'); 
xlim([20 10000]);



