#include <stdio.h>
#include <stdlib.h>

int main()
{
 double n,n0,nm1,cpt;
 printf ("Nous allons calculer le factoriel de n. \nPour des raisons d'overflow, n doit etre inferieur ou egal a 12\nEntrez n = ");
 scanf ("%lf", &n0);
 printf ("Calculons %lf! :\n" ,n0);
 cpt=n0;
 nm1=cpt--;
 n=n0;
while (cpt!=0)
 {
     nm1=cpt;
     printf("%lf*%lf=" ,n,nm1);
     n=n*nm1;
     printf("%lf  \n" ,n);
     cpt--;
}
printf ("Le resultat de %lf! est %lf \n\n" ,n0,n);
system ("pause");
return 0;
}
