#include <stdio.h>

int main()
{
    int cache = 666;
    int essai = 0;
    int a = -1;

    while ((essai < 10) && (a != cache))
    {
        essai++;
        printf("Essai %d : ", essai);
        scanf("%d", &a);
        if (a < cache)
            printf("Trop petit\n");
        if (a>cache)
            printf("Trop grand\n");
    }

    if (a == cache)
        printf("Bravo, vous avez trouve en %d essais\n", essai);
    else
        printf("Rate, le nombre mystere etait %d\n", cache);

    return 0;
}
