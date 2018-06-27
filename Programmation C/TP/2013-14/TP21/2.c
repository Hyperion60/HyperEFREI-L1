#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caractere;

    for (caractere = '0'; caractere <= '9'; ++caractere) {
        printf("%c %d\n", caractere, caractere);
    }

    for (caractere = 'A'; caractere <= 'Z'; ++caractere) {
        printf("%c %d\n", caractere, caractere);
    }

    return (0);
}
