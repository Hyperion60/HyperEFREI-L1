#include <stdio.h>

int main()
{
    int i;
    int compteur = 0;

    for (i = 11; i <= 119; i = i+2)
    {
        if ((i%3) != 0 && (i%5) != 0 && (i%7) !=0)
        {
            printf("%d  ", i);
            compteur++;
        }
    }
    printf("\n\nJ'ai affiche %d entiers au total\n", compteur);

    return 0;
}
