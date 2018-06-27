#include <stdio.h>
#include "ctype.h"

int main()
{
    unsigned char a;
    printf("Entrez un caractere\n");
    scanf(" %c", &a);

    if ((a >= 'a') && (a <= 'z'))
        printf("C'est un lettre minuscule\n");
    else if ((a >= 'A') && (a <= 'Z'))
        printf("C'est une lettre majuscule\n");
    else if ((a >= '0') && (a <= '9'))
        printf("C'est un chiffre\n");
    else
        printf("Ce n'est pas un caractere alphanumerique\n");

    if (islower(a) != 0)
        printf("C'est un lettre minuscule\n");
    else if (isupper(a) != 0)
        printf("C'est une lettre majuscule\n");
    else if (isdigit(a) == 1)
        printf("C'est un chiffre\n");
    else
        printf("Ce n'est pas un caractere alphanumerique\n");

    return 0;
}
