#include <stdio.h>

int main()
{
	double c;
	printf("Quel est le montant de votre capital en euros? ");
	scanf("%lf",&c);
	c=("%lf",c*(1+2.43/100));
	printf("Votre capital au bout de six mois sera de %lf \n", c);
	c=("%lf",c*(1+2.43/100));
	printf("Votre capital au bout de douze mois sera de %lf \n", c);
	c=("%lf",c*(1+2.43/100));
	printf("Votre capital au bout de dix-huit mois sera de %lf \n", c);
	c=("%lf",c*(1+2.43/100));
	c=("%lf",c*(1+2.43/100));
	printf("Votre capital au bout de trente mois sera de %lf \n", c);	
	system ("pause");
	return 0;
}

