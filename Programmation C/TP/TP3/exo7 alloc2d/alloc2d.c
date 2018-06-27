#include <stdio.h>
#include <stdlib.h>


int main ()
{
	long n,k,i,j,val=0;
	long **tab;
	
	do
	{
		printf("donnez n et k tout deux positifs\ndonnez n: ");
		fflush(stdin);
		scanf("%ld",&n);
		printf("\nDonnez k : ");
		fflush(stdin);
		scanf("%ld",&k);
	}
    while(k<0 || n<0);
	
	tab=(long**)malloc(n*sizeof(long*));

	for(i=0;i<n;i++) 
	{
		tab[i]=(long*)malloc(k*sizeof(long));
        
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			tab[i][j]=val;
			if(val==0){val=1;}
			else{val=0;}
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("%ld  ",tab[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
