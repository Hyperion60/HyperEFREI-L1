#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char genre;
    char marie;

    printf("Tapez 'h' si vous etes un homme, 'f' si vous etes une femme\n");
    scanf("%c", &genre);

    if (genre == 'f') {
        printf("Etes vous mariee ? Tapez 'o' si oui, 'n' sinon\n");
        scanf(" %c", &marie);

        if (marie == 'o'){
            printf("Bonjour madame");
        }
        else {
            printf("Bonjour mademoiselle");
        }
    }
    else {
        printf("Bonjour monsieur");
    }

    return 0;
}
