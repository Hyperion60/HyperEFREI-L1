#include <stdio.h>
#include <stdlib.h>

int main()
{
 double n,cpt1,factn,p,cpt2,factp,c,cpt3,factc,comb;
 printf ("Nous allons calculer le nombre de combinaison possible pour p elements parmi n, sans remise, avec n>p\n");
 printf ("Saisir le nombre de combinaison p\np=");
 scanf ("%lf", &p);
 printf ("Saisir le nombre d'element n\nn=");
 scanf ("%lf", &n);
factn=factp=factc=1;
for(cpt1=1;cpt1<(n+1);cpt1++)
    {
         factn=factn*cpt1;
    }
for(cpt2=1;cpt2<(p+1);cpt2++)
    {
         factp=factp*cpt2;
    }
c=(n-p);
for(cpt3=1;cpt3<(c+1);cpt3++)
    {
         factc=factc*cpt3;
    }

comb=factn/(factp*factc);
printf ("Le nombre de combinaison de %lf elements parmis %lf sans remise est %lf \n\n" ,p,n,comb);

system ("pause");
return 0;
}
