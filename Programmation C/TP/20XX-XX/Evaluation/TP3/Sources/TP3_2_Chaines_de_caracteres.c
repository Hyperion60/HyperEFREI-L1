#include <stdio.h>
#define N 16 /** 16 = 2^4 une puissance de 2 est toujours rapide pour une allocation mémoire */

/** C'est une copie simple, caractere par caractere.
La copie s'arrête lorsque le caractère de fin de chaîne est rencontré.
Ne pas oublier de mettre le  caractère de fin de chaîne dans la chaine obtenue
*/

/** Vision tableau : on ne voit pas de pointeur … */
void copie1(char dst[], const char src[])
{
    int i;
    for (i = 0; src[i] != '\0'; i++)
    {
        dst[i] = src[i];
    }
    dst[i] = '\0';
}

/** Vision mixte …
Utilisation indice 0, incrément des pointeurs …
src et dst sont jetables
*/
void copie2(char dst[], const char src[])
{
    for ( ; src[0] != '\0'; src++, dst++)
    {
        dst[0] = src[0];
    }
    dst[0] = '\0';
}

/** Vision pointeurs …
Utilisation indirection, incrément des pointeurs …
src et dst sont jetables
*/
void copie3(char * dst, const char * src)
{
    for ( ; *src != '\0'; src++, dst++)
    {
        *dst = *src;
    }
    *dst = '\0';
}

/** Ecritures compactes */
void copie4(char * dst, const char * src)
{
    while (*src != '\0')
    {
        *dst++ = *src++;
    }
    *dst = '\0';
}


void copie5(char * dst, const char * src)
{
    while ((*dst++ = *src++) != '\0')
    {
        ;
    }
}

/** THE MUST! */
void copie6(char * dst, const char * src)
{
    while (*dst++ = *src++)
    {
        ;
    }
}

/** K&R 78 */
void copie7(char * dst, const char * src)
{
    while (*dst++ = *src++);
}


/** On copie d'abord la premiere chaine dans concat,
puis on commence a copier la seconde a partir de l'endroit ou l'on s'est arrete,
jusqu'au caractère \0.
*/
int concatene(const char * s1, const char * s2, char * concat)
{
    int i, j = 0;

    for (i = 0; s1[i] != '\0'; i++)
        concat[i] = s1[i];

    for (j = 0; (s2[j] !='\0') && (i + j < N); j++)
        concat[i+j] = s2[j];

    concat[i + j] ='\0';

    if (i + j >= N)
        return 0;

    return 1;
}


/** On utilise la comparaison sur les char en C.
On considere pour simplifier que les mots ne seront qu'en minuscules
Ca ne marche pas si on met des majuscules.
 */
int ordreLex(const char * s1, const char * s2)
{
    int i;

    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] < s2[i])
            return -1;
        if (s1[i] > s2[i])
            return 1;
    }
    /** les chaines sont les mêmes */
    return(0);
}

/** On a un compteur qu'on initialise a 0.
On parcourt la chaine. A chaque fois qu'on rencontre le caractre, on ajoute 1 au compteur.
A la fin, le compte est bon.
*/
int occurence(const char * s, char caractere)
{
    int i, k;

    for (i = 0, k = 0; s[i] != '\0'; i++)
    {
        if (s[i] == caractere)
            k++;
    }
    return k;
}

/** On parcourt la chaine, a chaque fois qu'on rencontre le caractere,
on le remplace par l'autre caractere.
*/
void remplaceCaractere(char * s, char caractere, char remplace)
{
    int i;
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == caractere)
            s[i] = remplace;
    }
}

/** On parcourt chaine1, puis, pour chaque lettre, on regarde si elle apparait
dans chaine et si oui on remplace par la lettre correspondante dans chaine3.
Attention, il est necessaire de s'arreter immediatement et de passer a la lettre suivante
pour ne pas remplacer la lettre mise par une autre si elle apparait dans chaine2.

Pour illuster le probleme, voici ce qui se passerait si la chaine est bonjour,
chaine2 est on et chaine3 est no.
quand on lit le o, on le remplace par un n,
puis on lit le n, on le remplace par un o
*/
void remplaceListe(char * s1, const char * s2, const char * s3)
{
    int i, j;

    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; (s2[j]!= '\0') && (s3[j] != '\0'); j++)
        {
            if (s1[i] == s2[j])
            {
                s1[i] = s3[j];
            }
        }
    }
}

/** On initialise 2 tableaux de 256 entiers, qu'on initialise à 0.
Ca suffit pour capturer toutes les lettres.
Puis on lit les 2 chaines en ajoutant 1 dans la case correspondant a la lettre lue.
A la fin, on compare simplement si on a la meme valeur dans toutes les cases.
Si oui, c'est un anagramme.
*/
int anagramme (char * s1, char * s2)
{
    int i, index;
    int s1Occurences[256], s2Occurences[256];

    for (i = 0; i < 256; i++)
    {
        s1Occurences[i] = 0;
        s2Occurences[i] = 0;
    }

    for (i = 0; s1[i] != '\0'; i++)
    {
        index = s1[i];
        s1Occurences[index]++;
    }

    for (i = 0; s2[i] != '\0'; i++)
    {
        index = s2[i];
        s2Occurences[index]++;
    }

    for (i = 0; i < 256; i++)
    {
        if (s1Occurences[i] != s2Occurences[i])
            return 0;
    }

    return 1;
}

/** On parcourt la premiere chaine, et a chaque lettre, on essaie de parcourir
la premier a partir de la case i en comparant avec la seconde en les parcourant
en parallele tant qu'on a egalite sur les 2.
Si on arrive a la fin de la seconde ainsi, on renvoie i puisque le mot commencait la.
Sinon on continue.
Si on arrive a la fin de la premiere chaine, on n'a pas trouve le mot.
**/
int recherche(const char * s, const char * mot)
{
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for(j = 0; s[i+j] == mot[j]; j++)
        {
            if(mot[j+1] == '\0')
                return i;
        }
    }

    return -1;
}

int main(void)
{
    int choix;
    char chaine1[N], chaine2[N], chaine3[N];
    char caractere, remplace;

    do
    {
        /** le caractère \ en fin de ligne indique que la chaine se poursuit à la ligne suivante */
        printf("Que voulez-vous faire ?\n \
           1 -> copie\n \
           2 -> concatene\n \
           3 -> ordreLex\n \
           4 -> occurence\n \
           5 -> remplaceCaractere\n \
           6 -> remplaceListe\n \
           7 -> anagramme\n \
           8 -> recherche\n \
           0 -> Fin\n");
        scanf("%d", &choix);

        switch(choix)
        {
        case 0:
            printf("Au revoir\n");
            break;
        case 1:
            printf("Entrez 1 chaine\n");
            printf("Chaine 1 : ");
            scanf("%s", chaine1);
            copie1(chaine2, chaine1); /** essayer les 6 autres versions */
            printf("copie: %s\n", chaine2);
            break;
        case 2:
            printf("Entrez 2 chaines\n");
            printf("Chaine 1 : ");
            scanf("%s", chaine1);
            printf("Chaine 2 : ");
            scanf("%s", chaine2);
            concatene(chaine1, chaine2, chaine3);
            printf("concatenation : %s\n", chaine3);
            break;
        case 3:
            printf("Entrez 2 chaines\n");
            printf("Chaine 1 : ");
            scanf("%s", chaine1);
            printf("Chaine 2 : ");
            scanf("%s", chaine2);
            printf("Ordre Lexicographique : %d\n", ordreLex(chaine1, chaine2));
            break;
        case 4:
            printf("Entrez 1 chaine\n");
            printf("Chaine 1 : ");
            scanf("%s", chaine1);
            printf("Entrez un caractere\n");
            scanf(" %c",&caractere);
            printf("%c apparait %d fois\n", caractere, occurence(chaine1,caractere));
            break;
        case 5:
            printf("Entrez 1 chaine\n");
            scanf("%s", chaine1);
            printf("Entrez un caractere a remplacer puis celui par lequel le remplacer\n");
            scanf(" %c %c", &caractere, &remplace);
            remplaceCaractere(chaine1, caractere, remplace);
            printf("resultat : %s\n", chaine1);
            break;
        case 6:
            printf("Entrez 1 chaine, puis la chaine des caracteres a remplacer, \
                   puis la chaine des caracteres par lesquels on remplace les precedents à la même position\n");
            printf("Chaine 1 : ");
            scanf("%s", chaine1);
            printf("Chaine 2 : ");
            scanf("%s", chaine2);
            printf("Chaine 3 : ");
            scanf("%s", chaine3);
            remplaceListe(chaine1, chaine2, chaine3);
            printf("resultat : %s\n",chaine1);
            break;
        case 7:
            printf("Entrez 2 chaines\n");
            printf("Chaine 1 : ");
            scanf("%s", chaine1);
            printf("Chaine 2 : ");
            scanf("%s", chaine2);
            if (anagramme(chaine1, chaine2) == 1)
                printf("Ce sont des anagrammes\n");
            else
                printf("Ce ne sont pas des anagrammes\n");
            break;
        case 8:
        {
            int position;
            printf("Entrez 2 chaines\n");
            printf("Chaine 1 : ");
            scanf("%s", chaine1);
            printf("Chaine 2 : ");
            scanf("%s", chaine2);
            position =  recherche(chaine1, chaine2);
            if (position !=-1)
                printf("%s est dans %s a la position %d\n",chaine2, chaine1, position);
            else
                printf("%s n'est pas dans %s\n", chaine2, chaine1);
            break;
        }
        default:
            printf("cas non prévu\n");
            break;
        }
    }
    while(choix != 0);

    return 0;
}
