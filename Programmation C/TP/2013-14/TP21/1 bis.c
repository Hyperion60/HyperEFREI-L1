#include <stdio.h>
#include <stdlib.h>

int main()
{
   char caractere;

   printf("Entrez le caractere : ");
   scanf("%c", &caractere);

   if (isupper(caractere) != 0) {
      printf("Le caractere tape est une majuscule");
   }
   else if (islower(caractere) != 0) {
      printf("Le caractere tape est une minuscule");
   }
   else if (isdigit(caractere) != 0) {
      printf("Le caractere est un chiffre");
   }
   else {
      printf("Le caractere est non alphanumerique");
   }

    return (0);
}
