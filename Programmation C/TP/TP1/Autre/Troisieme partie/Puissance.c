#include <stdio.h>
#include <stdlib.h>

int main()
{
 long x,x0,y,cpt;
 y=0;
 x=0;
 cpt=1;
 x0=0;
 printf ("Nous allons calculer x puissance y : \nEntrez x, puis y \n");
 scanf ("%ld", &x0);
 printf("^ \n");
 scanf ("%ld", &y);
 printf ("calculons %ld^%ld ... \n" ,x0,y);

 x=x0;
while (cpt<y)
 {
     x=x0*x;
     cpt++;
     printf ("%ld^%ld=%ld\n" ,x0,cpt,x);
 }
printf ("On peut en conclure que %ld^%ld = %ld \n", x0,y,x);
system("pause");
return 0;
}
