#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
double a,b,c,disc;
double re1,im1,re2,im2;

printf("Entrez le coeff de x^2 de x et le terme cst.\n");

fflush(stdin);
scanf("%lf",&a);
fflush(stdin);
scanf("%lf",&b);
fflush(stdin);
scanf("%lf",&c);

disc = b*b - (4*a*c);

if ( disc > 0 )
	{
	re1=( -b - sqrt(disc) ) / (2.0*a);
	re2=( -b + sqrt(disc) ) / (2.0*a);
	printf( "Les solutions sont x1=%lf et x2=%lf \n",re1,re2);
	}

if ( disc == 0 )
	{
	re1= -b / (2.0*a);
	printf( "la solution est x=%lf\n",re1);
	}

if ( disc < 0 )
	{
	re1= -b/(2.0*a);
	im1= sqrt( -disc )/(2.0*a);
	printf("les solutions imaginaires sont %lf +%lfi et %lf +%lfi\n",re1,im1,re1,-im1);
	}

system ("pause");
return 0;
}
