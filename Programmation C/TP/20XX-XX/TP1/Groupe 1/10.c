#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N; // Nombre de pommes
    int P; // Prix d'une pomme
    float prixFinal;

    printf("Nombre de pommes:\n");
    scanf("%d", &N);
    printf("Prix d'une pomme:\n");
    scanf("%d", &P);

    if (N > 5) {
        printf("Vous avez une r�duction de 5%\n");
        prixFinal = (N*P)-(0.05);
    }
    else if (N <= 5 && N >= 3) {
        printf("Vous avez une r�duction de 3%\n");
        prixFinal = (N*P)-(0.03);
    }
    else {
        printf("Vous n'avez pas de r�duction\n");
        prixFinal = (N*P);
    }

    printf("Prix � payer: %f", prixFinal);
}
