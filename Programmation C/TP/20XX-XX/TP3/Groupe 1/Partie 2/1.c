#include<stdio.h>

void copieChaine(char source[], char destination[]);

int main()
{
    char source[100], destination[100];

    printf("Saisissez la chaine a copier.\n");

    printf("Chaine originale :\n");
    scanf("%s", source);

    copieChaine(source, destination);

    printf("Copie: %s\n", destination);

    return 0;
}

void copieChaine(char source[], char destination[])
{
    int i;

    // Tant qu'on n'a pas atteint le caract�re de fin \0, on copie
    for (i = 0; source[i] != '\0'; i++){
        destination[i] = source[i];
    }

    // On ajoute le caract�re de fin \0 qu'on a ignor� dans la boucle pr�c�dente
    destination[i] = '\0';
}
