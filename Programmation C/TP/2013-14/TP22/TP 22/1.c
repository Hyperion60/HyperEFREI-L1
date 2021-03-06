#include <stdio.h>

void testCaracteres();
void affichageCaracteres();
void arretSaisie();
char recommencer();
void rechercheNombre();
char afficherChoix();

void main(void)
{
    char choixUtilisateur;

    do {
        choixUtilisateur = afficherChoix();

        switch(choixUtilisateur)
        {
            case '1':
                testCaracteres();
                choixUtilisateur = recommencer();
                break;
            case '2':
                affichageCaracteres();
                choixUtilisateur = recommencer();
                break;
            case '3':
                arretSaisie();
                choixUtilisateur = recommencer();
                break;
            case '4':
                rechercheNombre();
                choixUtilisateur = recommencer();
                break;
            default :
                printf("Votre selection est incorrecte\n");
                choixUtilisateur = recommencer();
                break;
        }
    } while (choixUtilisateur != 'n');
}

void testCaracteres()
{
   char caractere;

   printf("1. Tests sur les caracteres\n");

   printf("Entrez le caractere : ");
   scanf(" %c", &caractere);

   if (caractere >= 'A' && caractere <= 'Z') {
      printf("Le caractere tape est une majuscule\n");
   }
   else if (caractere >= 'a' && caractere <= 'z') {
      printf("Le caractere tape est une minuscule\n");
   }
   else if (caractere >= '0' && caractere <= '9') {
      printf("Le caractere est un chiffre\n");
   }
   else {
      printf("Le caractere est non alphanumerique\n");
   }
}

void affichageCaracteres()
{
    char caractere;

    printf("2. Affichage de caracteres et de leur code ASCII\n");

    for (caractere = '0'; caractere <= '9'; ++caractere) {
        printf("%c %d\n", caractere, caractere);
    }

    for (caractere = 'A'; caractere <= 'Z'; ++caractere) {
        printf("%c %d\n", caractere, caractere);
    }
}

void arretSaisie()
{
    int entier = 0;
    int compteur = 0;
    int sommeMoyenne = 0;

    printf("3. Arret d'une saisie grace a une valeur\n");
    printf("Rentrez des entiers positifs, puis un entier negatif pour arreter la saisie\n");

    // Tant qu'on a eun entier positif...
    while (entier >= 0) {
        printf("Entrez votre entier:\n");
        scanf("%d", &entier);

        // Si cet entier est bel est bien positif, on l'ajoute � notre somme
        // On incr�mente notre compteur dans ce cas uniquement pour ne pas
        // avoir un compteur plus �lev� qu'on a de note
        if (entier >= 0) {
            sommeMoyenne = sommeMoyenne+entier;
            compteur++;
        }
    }

    if (compteur != 0) {
        printf("La moyenne est: %d\n", sommeMoyenne/compteur);
    }
    else {
        printf("Erreur\n");
    }
}

char recommencer()
{
    char choixUtilisateur;

    printf("Voulez-vous recommencer? Tapez 'o' pour oui, 'n' pour non.\n");
    scanf(" %s", &choixUtilisateur);

    return choixUtilisateur;
}

void rechercheNombre()
{
    int nombreDonne;
    int nombreRecherche = 598;
    int compteurEssais = 1;

    printf("4. Recherche d'un nombre cache\n");

    do {
        printf("Essai numero %d/10\n", compteurEssais);
        printf("Entrez votre nombre entre 0 et 1000\n");
        scanf("%d", &nombreDonne);

        // Petit test non n�cessaire...
        if (nombreDonne > 1000 || nombreDonne < 0) {
            printf("Vous auriez du rentrer un nombre entre 0 et 1000...\n");
            exit(0);
        }

        if (nombreDonne > nombreRecherche) {
            printf("Le nombre donne est plus grand que le nombre recherche\n");
        }
        else if (nombreDonne < nombreRecherche) {
            printf("Le nombre donne est plus petit que le nombre recherche\n");
        }

        ++compteurEssais;

    } while (nombreDonne != nombreRecherche && compteurEssais < 11);

    if (nombreDonne == nombreRecherche) {
        printf("Gagne en %d essais\n", compteurEssais-1);
    }
    else {
        printf("Perdu en %d essais\n", compteurEssais-1);
    }
}

char afficherChoix()
{
    char choixUtilisateur;

    printf("Quel programme voulez vous lancer ? Saisissez le chiffre correspondant.\n");
    printf("1. Tests sur les caracteres\n");
    printf("2. Affichage de caracteres et de leur code ASCII\n");
    printf("3. Arret d'une saisie grace a une valeur\n");
    printf("4. Recherche d'un nombre cache\n");

    scanf("%s", &choixUtilisateur);

    return choixUtilisateur;
}
