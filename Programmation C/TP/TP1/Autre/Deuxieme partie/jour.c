#include <stdio.h>

int main()
{
long j,m,a,JS;
double s,JD;

printf("Jour ? \n");
fflush(stdin);
scanf("%ld",&j);

printf("Mois ? \n");
fflush(stdin);
scanf("%ld",&m);

printf("Annee ? \n");
fflush(stdin);
scanf("%ld",&a);

s= (int) (a / 100) ;

JD = 1720996.5 -s +s/4.0 + (int) (365.25*a)  + (int) ( 30.6001*(m+1) ) + j;

JD = JD - ( (int) ( JD/7.0 ) ) * 7;

JS = ( (int) JD ) % 7;

if (JS == 0) { printf ("Mardi\n"); }
if (JS == 1) { printf ("Mercredi\n"); }
if (JS == 2) { printf ("Jeudi\n"); }
if (JS == 3) { printf ("Vendredi\n"); }
if (JS == 4) { printf ("Samedi\n"); }
if (JS == 5) { printf ("Dimanche\n"); }
if (JS == 6) { printf ("Lundi\n"); }


system ("pause");
return 0;
}
