clc; clf; N=44100; 
frequence=20;                     %Fréquence réelle en Hertz
frcoupure=1000;                     %Fréquence de coupure des I°ordre en Hertz
frcentral=2000;
deltafreq=20;     %Fréq. centrale & LB du passe-bande en Hertz

%------ Normalisations et calcul des constantes de temps ------
f=frequence/N;	fc=frcoupure/N;	f0=frcentral/N;	Df=deltafreq/N;     
k =1/(2*pi*fc); k2=1/(2*pi*Df); k1=Df/(2*pi*f0*f0);

%---------------------- Initialisation des tableaux ------------------------------
temp=zeros(1,N); freq=zeros(1,N); e=zeros(1,N); s=zeros(1,N); 
z=zeros(1,N); ss=zeros(1,N); zz=zeros(1,N); y=zeros(1,N);
for t=1:N       temp(t)=(t-1)/N; freq(t)=(t-1);     end
% 1°) PROGRAMMATION D'UNE ENTREE SINUSOIDALE
      for t=1:N e(t)=sin(2*pi*f*t); end  
% 2°, 3°, 4°) ENTREE IMPULSIONNELLE, INDICIELLE, BRUIT ...

Fe=fft(e); Se=sqrt(Fe.*conj(Fe))/N;	soundsc(e,N);	

%-----------------------Programmation des filtres --------------------------------

 for t=2:N   s(t)= [1/(1 + k)]*e(t) + [k/(1+k)]*s(t-1); end         
 %for t=2:N   ss(t) = [1/(1+k)]*s(t) + [k/(1+k)]*ss(t-1); end 
 %for t=2:N  z(t)= e(t)-s(t); end      
 %for t=2:N   zz(t) = (k/(1+k))*(z(t) - z(t-1) + zz(t-1)); end
 %for t=3:N   y(t) = (1/(1+k1+k1*k2))*e(t)+(((k1+(k1*k2)))/(1+k1+k1*k2)*y(t-1)-((k1*k2)/(1+k1+k1*k2))*y(t-2)); end  
       
soundsc(s,N);pause; %soundsc(zz,N);pause;   %Ecoute des II°ordre %

figure(1);   %----------Tracé des Chronogrammes------------------------------------
subplot(4,1,1); plot(temp,e,'r'); grid; ylabel ('Entrée'); title('CHRONOGRAMMES');                
subplot(4,1,2); plot(temp,s,'b',temp,ss,'c'); grid; ylabel ('Passe-bas I et II');  
subplot(4,1,3); plot(temp,z,'b',temp,zz,'c'); grid; ylabel ('Passe-haut I et II');  
subplot(4,1,4); plot(temp,y,'g'); grid; ylabel ('Passe-bande'); xlabel('Temps(s)');

figure(2); %-----------------------Tracé des Spectres-----------------------------             
subplot(4,1,1); semilogx(freq,Se,'r'); grid; ylabel('Se'); title('SPECTRES'); 
xlabel('Fréquence (Hz)'); %xlim([20 20000]);                


Fe=fft(e); Se=sqrt(Fe.*conj(Fe))/N;	soundsc(e,N);	

