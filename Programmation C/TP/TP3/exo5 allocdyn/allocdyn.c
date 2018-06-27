#include <stdio.h>
#include <stdlib.h>

int main()
{
	long *tab1;
	long cpt;

	for (cpt=0;cpt<524288000;cpt=cpt+10485760 )
	{
    tab1 = (unsigned long*) malloc(cpt*sizeof(unsigned long)) ;
	
	printf("Allocation numero %ld , %ld octets alloues, adresse : %ld\n",cpt/10485760,cpt,tab1);

	free(tab1);
	}

	// On trouve 472 megas de mémoire libre à l'aide de cette boucle. Cela parait correct.

	for (cpt=0;cpt<51;cpt=cpt++ )
	{
    tab1 = (unsigned long*) malloc(10485760*sizeof(unsigned long)) ;
	
	printf("Allocation numero %ld , %ld octets alloues, adresse : %ld\n",cpt,cpt*10485760,tab1);

	}

	// On trouve 47 paquets de 10 megas ce qui concorde avec la boucle précédente.

    system("PAUSE");
    return 0;
}
