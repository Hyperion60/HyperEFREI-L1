#include <stdio.h>
#include <stdlib.h>

int main()
{

	long tab[50];
	long utile;
	long *ptr;

	printf("%ld %ld \n",tab,ptr);

	ptr = NULL;

	printf("%ld\n",ptr);

	// tab=ptr; Le message d'erreur est "tabpoin.c:17: incompatible types in assignment",
	// il semble donc impossible d'affecter le pointeur avec le tableau.
	
	ptr=tab; // Ca marche.

	printf("%ld %ld \n",tab,ptr); // C'est les mêmes.


	  system("PAUSE");
      return 0;
	  }
