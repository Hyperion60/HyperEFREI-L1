#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    int count = 0;

    for (i = 11; i < 120; i=i+2) {
        if (i%3 != 0 && i%5 != 0 && i%7 != 0) {
            printf("Entier impair %d\n", i);
            count++;
        }
    }

    printf("Total d'entiers repondant a la question: %d", count);
}
