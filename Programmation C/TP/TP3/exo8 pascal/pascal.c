#include <stdio.h>
#include <stdlib.h>

int main()
{

      int ** triangle;
      int n,i,j;

      printf("Jusqu'a quel rang voulez-vous etablir le triangle de Pascal ?\n\tn=");
      scanf("%d",&n);

      triangle=(int**)malloc(n*sizeof(int*));

      
      for(i=0;i<n;++i)//Creation du triangle
      {
                triangle[i]=(int*)malloc((i+1)*sizeof(int));
                triangle[i][0]=1;   
                triangle[i][i]=1;
      }

     
      for(i=2;i<n;++i)//Remplissage du triangle
      {
                for(j=1;j<i;++j)
                {               
                                                triangle[i][j]=triangle[i-1][j]+triangle[i-1][j-1];
                }
      }

      
      printf("\n---------Triangle de Pascal----------\n");//Affichage du triangle de pascal
      for(i=0;i<n;++i)
      {
                                  printf("Rang %02.d : ",i);
                 
                 for(j=0;j<=i;++j)
                 {
                                             printf("%03.d ",triangle[i][j]);
                 }
                 putchar('\n');
      }

      
      for(i=0;i<n;++i)//Liberation des cases memoire
      {  
                                      free(triangle[i]);
      }
      free(triangle);

      system("PAUSE");
      return 0;
}
