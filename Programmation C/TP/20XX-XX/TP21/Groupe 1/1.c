#include <stdio.h>
#include <stdlib.h>

int main()
{
   char caractere;

   printf("Entrez le caractere : ");
   scanf("%c", &caractere);

   if (caractere >= 'A' && caractere <= 'Z') {
      printf("Le caractere tape est une majuscule");
   }
   else if (caractere >= 'a' && caractere <= 'z') {
      printf("Le caractere tape est une minuscule");
   }
   else if (caractere >= '0' && caractere <= '9') {
      printf("Le caractere est un chiffre");
   }
   else {
      printf("Le caractere est non alphanumerique");
   }

   return (0);
}
