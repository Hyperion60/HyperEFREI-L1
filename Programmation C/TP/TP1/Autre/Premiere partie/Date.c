#include <stdio.h>

int main()
{
	long j,m,a,s;
	double jd,js;
	
	printf("Saisir le jour: ");
	scanf("%ld",&j);
	printf("Saisir le mois: ");	
	scanf("%ld",&m);
	printf("Saisir l'annee: ");
	scanf("%ld",&a);
	if(m==1 && m==2)
	{
		m=m+12;
		a=a-1;
    }
	s=(int)(a/100);
	jd=1720996.5-s+(s/4)+(long)(365.25*a)+(long)(30.6001*(m+1))+j;
	jd=jd-(long)(jd/7)*7;
	js=(long)(jd)%7;
	if (js==0)printf("Le jour est Mardi\n");
	if (js==1)printf("Le jour est Mercredi\n");
	if (js==2)printf("Le jour est Jeudi\n");
	if (js==3)printf("Le jour est Vendredi\n");
	if (js==4)printf("Le jour est Samedi\n");
	if (js==5)printf("Le jour est Dimanche\n");
	if (js==6)printf("Le jour est Lundi\n");
	system("pause");
	return 0;
}
