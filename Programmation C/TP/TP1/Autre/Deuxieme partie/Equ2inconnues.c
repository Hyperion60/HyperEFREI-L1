#include <stdio.h>
int main ()

{
    double a1,a2,b1,b2,c1,c2,det1,det2,x,y;
    printf("Nous allons resoudre un systeme de deux equations a deux inconnues. Nous allons saisir les coefficients de l'equation sous la forme ax+by=c");
    printf("saisir le coefficient a de la premiere equation \n a=" );
    scanf("%lf", &a1);
    printf("saisir le coefficient b de la premiere equation \n b=");
    scanf("%lf", &b1);
    printf("saisir le coefficient c de la premiere equation \n c=");
    scanf("%lf", &c1);
    
    printf("saisir le coefficient a de la deuxieme equation \n a=");
    scanf("%lf", &a2);
    printf("saisir le coefficient b de la deuxieme equation \n b=");
    scanf("%lf", &b2);
    printf("saisir le coefficient c de la deuxieme equation \n c=");
    scanf("%lf", &c2);
    
    det1=a1*b2-a2*b1;
    if (det1==0) 
    {  
       det2=a1*c2-a2*c1;
       if (det2==0) 
       {           
        printf ("Il y a une infinite de solutions \n");
       }
       else printf ("Il n'y a pas de solution \n");
    }
    
    else 
    {
         x=(c1*b2-b1*c2)/(a1*b2-a2*b1);
         y=(a1*c2-c1*a2)/(a1*b2-a2*b1);
         printf("Les solutions sont x= %lf et y=%lf \n", x,y );
    }
  
    system ("pause");
    return 0;
}
