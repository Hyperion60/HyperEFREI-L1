#include <stdio.h>

int main()
{
    int caractere, codeAscii;

    for(caractere = 'A'; caractere <= 'Z'; caractere += 1)
    {
        printf("caractere %c \t code Ascii %d\n", caractere, caractere);
    }
    printf("\n");
    for(caractere = 'a'; caractere <= 'z'; caractere += 1)
    {
        printf("caractere %c \t code Ascii %d\n", caractere, caractere);
    }
    return 0;
}


