#include <stdio.h>

int main()
{
	long tl,rl,ts;
	double ds;
	tl=("%fd",384000);
	rl=("%fd",1740);
	ts=("%fd",150000000);
	ds=("%fl",(ts/tl)*2*rl);
	printf("Le diametre du soleil est de : %fl \n", ds);
	system("pause");
	return 0;
}
