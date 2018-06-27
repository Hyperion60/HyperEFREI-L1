#include <stdio.h>
#include <math.h>

int main()
{
double a,b,c,disc;
double x1,x2;

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
	x1=( -b - sqrt(disc) ) / (2.0*a);
	x2=( -b + sqrt(disc) ) / (2.0*a);
	printf( "Les solutions sont x1=%lf et x2=%lf \n",x1,x2);
	}

if ( disc == 0 )
	{
	x1= -b / (2.0*a);
	printf( "la solution est x=%lf\n",x1);
	}

if ( disc < 0 )
	{
	printf( "Pas de solution dans R\n");
	}

system ("pause");
return 0;
}
