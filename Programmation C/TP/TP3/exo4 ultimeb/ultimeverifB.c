#include <stdio.h>
#include <stdlib.h>

int main ()
{

	double val_a, val_b, val_c;
	double *pdoub;
	double *qdoub;

	val_a=5.0;
	val_b=3.1415;
	val_c=1.E-50;

	qdoub = &val_b;
	pdoub = qdoub;

	pdoub = pdoub-1;

	printf("%ld\n",(qdoub-pdoub));

	qdoub = qdoub+1;

	printf("%lf\n",(*qdoub));

	*qdoub = val_a;

	*pdoub = (*pdoub)+1;

	printf("%ld %lf\n",(qdoub-pdoub),*pdoub);

	*qdoub = *pdoub;
	pdoub = pdoub+1;

	printf("%ld %lf %lf\n",(qdoub-pdoub),*pdoub,*qdoub);

	system("pause");
    return 0;

}
