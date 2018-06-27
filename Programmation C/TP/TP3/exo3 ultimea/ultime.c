#include <stdio.h>
int main ()
{
	char a[9]={12,23,34,45,56,67,78,89,90};
	char *p;
	int i;

	p=a;
		
	printf("les valeurs de a: ");
	for(i=0;i<9;i++)
	{
		printf("%d  ",a[i]);
	}


	printf("\nles valeurs de p: ");
	for(i=0;i<9;i++)
	{
		printf("%ld  ",p[i]);
	}

	printf("\nl'adresse de a : %ld  l'adresse de p: %ld",&a,p);
	
	printf("\n\n*(p+2): %ld",*(p+2));

	printf("\n\n&p+1: %ld",&p+1);

	printf("\n\n&a[4]-3: %ld",&a[4]-3);

	printf("\n\na+3: %ld",a+3);

	printf("\n\na[7]-p: %ld",&a[7]-p);

	printf("\n\np+(*p-10): %ld",p+(*p-10));

	printf("\n\n*(p+*(p+8)-a[7]): %ld\n\n",*(p+*(p+8)-a[7]));
		
	system("pause");
	return 0;
}