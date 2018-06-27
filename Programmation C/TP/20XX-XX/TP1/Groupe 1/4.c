#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float xP;
    float yP;
    float xQ;
    float yQ;

    printf("Entrez coordonnees xP ");
    scanf("%f", &xP);
    printf("Entrez coordonnees yP ");
    scanf("%f", &yP);
    printf("X(%f;%f)\n", xP, yP);
    printf("Entrez coordonnees xQ ");
    scanf("%f", &xQ);
    printf("Entrez coordonnees yQ ");
    scanf("%f", &yQ);
    printf("Y(%f;%f)\n", yQ, yQ);

    if (xP==xQ && yP==yQ)
    {
        printf("Erreur");
        return 0;
    }

    float a = ((yP-yQ)/(xP-xQ));
    printf("a = %f\n", a);
    float b = yP-a*xP;
    printf("b = %f\n", b);
    printf("f(x) = %fx + %f\n",a,b);

    float a1;
    float b1;
    float a2;
    float b2;

    printf("Entrez le coefficient directeur de la droite 1 : ");
    scanf("%f", &a1);
    printf("Entrez l'ordonnee a l'origine de la droite 1 : ");
    scanf("%f",&b1);
    printf("Entrez le coefficient directeur de la droite 2 : " );
    scanf("%f",&a2);
    printf("Entrez l'ordonnee a l'origine de la droite 2 : ");
    scanf("%f",&b2);

    float xI;
    float yI;

    if ((a1-a2) != 0) {
        xI = (b2-b1)/(a1-a2);
        yI = a1*xI + b1;
        printf("Intersection : I(xI=%f,yI=%f)", xI, yI);
    }
}
