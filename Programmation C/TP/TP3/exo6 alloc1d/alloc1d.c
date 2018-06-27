#include <stdio.h>
#include <stdlib.h>



tri(int * tab,int taille)//tri bulle
{ 

   int i,j,t;

   for(j=0;j<taille;++j)
   { 
         for(i=0;i<taille-j;++i)
         {
                                if(tab[i]>tab[i+1])
                                {
                                          t=tab[i];
                                          tab[i]=tab[i+1];
                                          tab[i+1]=t;
                                }
         }
   }
}

tri_invert(int * tab,int taille)//tri bulle inversé
{ 

   int i,j,t;

   for(j=taille;j>0;j--)
    {
          for(i=taille;i>0;i--)
          { 
                               if(tab[i]>tab[i-1])
                               {
                                           t=tab[i];
                                           tab[i]=tab[i-1];
                                           tab[i-1]=t;
                               }
          }
    }
}



int main()
{
     int * tab=(int*)malloc(sizeof(int));  //tab dyn d'1 case
     int r,i=0,j;

     printf("Saisissez les valeurs : (q pour quitter)\n");

     fflush(stdin);

     while(r!=0)
     {
              printf("valeur n_%d : ",i);
              r=scanf("%d",&tab[i]);
        
              fflush(stdin);
              tab=(int*)realloc(tab,(i+2)*sizeof(int));    //on rejoute 1 case
              ++i;
     }  
     tab[i-1]=(-1); 




     printf("%d Elements\n",i);
     for(j=0;j<i;j++)
     {         
               printf("val %d : %d\n",j,tab[j]);
               printf("\nTriage...\n");
               tri(tab,i-1);
     }
     
     for(j=0;j<i;j++)
     {
               printf("val %d : %d\n",j,tab[j]);
               printf("\nInversion...\n");
               tri_invert(tab,i-1);
               
               for(j=0;j<i;j++)
               {
                               printf("val %d : %d\n",j,tab[j]);
               }
     }
      free(tab);
      system("PAUSE");
      return 0;
}


