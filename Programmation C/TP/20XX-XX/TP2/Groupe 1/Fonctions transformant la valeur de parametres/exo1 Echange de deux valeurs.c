#include <stdio.h>

extern void echange(int * x, int * y);

int main()
{
    int a = 2;
    int b = 6;

    printf("a = %d et b = %d\n", a, b);
    echange(&a, &b);
    printf("a = %d et b = %d\n",a, b);

    return 0;
}


void echange (int * x, int * y)
{
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}
