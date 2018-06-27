#include <stdio.h>
int main ()

{
    long h,m,s;
    int verif;
    printf("Bonjour nous allons saisir l'heure actuelle \n");
    h=25;
    m=61;
    s=61;
    while (h>24 || h<0 || verif==0)
    {
         printf("Veuillez saisir l'heure entre 0 et 24 \n");
         fflush(stdin);
         verif=scanf("%ld", &h);
         while (verif==0) 
        {  
           printf ("Veuillez saisir une valeur numerique \n");
           fflush(stdin);
           verif=scanf("%ld", &h);
         }
        if (h>24 || h<0) printf("L'heure doit etre comprise entre 0 et 24 \n");    
    }
     
     
     while (m>60 || m<0 || verif==0)
    {
         printf("Veuillez saisir des minutes entre 0 et 60 \n");
         fflush(stdin);
         verif=scanf("%ld", &m);
         while (verif==0) 
        {  
           printf ("Veuillez saisir une valeur numerique \n");
           fflush(stdin);
           verif=scanf("%ld", &m);
         }
        if (m>60 || m<0) printf("Les minutes doivent etre comprises entre 0 et 60 \n");    
    }
     

     while (s>60 || s<0 || verif==0)
    {
         printf("Veuillez saisir des secondes entre 0 et 60 \n");
         fflush(stdin);
         verif=scanf("%ld", &s);
         while (verif==0) 
        {  
           printf ("Veuillez saisir une valeur numerique \n");
           fflush(stdin);
           verif=scanf("%ld", &s);
         }
        if (s>60 || s<0) printf("Les secondes doivent etre comprises entre 0 et 60 \n");    
    }
    if (s==60) 
    {
              m=m+1;
              s=0;
    }
    if (m==60)
    {
             h=h+1;
             m=0;
    }
    if (m==61)
    {
             h=h+1;
             m=1;
    }
    if ((h==24) && (s!=0  m!=0))
    {
             h=0;            
    }
    if (h==25)
    {
             h=1;
    }    
    printf("Il est %ld:%ld:%ld \n", h,m,s); 
    system ("pause");
    return 0;
}
