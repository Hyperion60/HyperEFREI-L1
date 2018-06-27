#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   /* printf("BUOB POUPA\n");
    int A = 4;
    int B= 4;

    int multiplication = A*B;
    int addition =  A+B;
    int soustraction = A-B;
    int division = A/B;
    printf("A + B = %d\n", addition);
    printf("A - B = %d\n", soustraction);
    printf("A * B = %d\n", multiplication);
    printf("A / B = %d\n", division);

    float C = 2.3;
    float D = 4.3;
    float multiplication1 = C*D;
    float addition1 = C+D;
    float soustraction1 = C-D;
    float division1 = C/D;
    printf("C + D = %f\n", addition1);
    printf("C - D = %f\n", soustraction1);
    printf("C * D = %f\n", multiplication1);
    printf("C / D = %f\n", division1);

    float E;
    float F;
    printf("entrez E :");
    scanf("%f",&E);
    printf("entrez F :");
    scanf("%f", &F);
    printf("E + F = %f\n", E+F);
    printf("E - F = %f\n", E-F);
    printf("E * F = %f\n", E*F);
    if (F != 0) {
    printf("E / F = %f\n", E/F);
    }

    int G;
    int H;
    printf("entrez G :");
    scanf("%d",&G);
    printf("entrez H :");
    scanf("%d", &H);

    printf("G + H = %f\n", G+H);

    if (G%2 == 0 && G%3 == 0) {
        printf(" G est un multiple de 2 et 3\n");
    }
    else {
        if ( G%2==0) {
            printf(" G est un multiple de 2\n");
        }
        if ( G%3==0) {
            printf(" G est un multiple de 3\n");
        }
    }

    if (H%2 == 0 && H%3 == 0) {
        printf(" H est un multiple de 2 et 3\n");
    }
    else {
        if ( H%2==0) {
            printf(" H est un multiple de 2\n");
        }
        if ( H%3==0) {
            printf(" H est un multiple de 3\n");
        }
    }

    float xP;
    float yP;
    float xQ;
    float yQ;
    printf("entrez coordonnées xP ");
    scanf("%f", &xP);
    printf("entrez coordonnées yP ");
    scanf("%f", &yP);
    printf("\n");
    printf("X(%f;%f)\n", xP, yP);
    printf("\n");
    printf("entrez coordonnées xQ ");
    scanf("%f", &xQ);
    printf("entrez coordonnées yQ ");
    scanf("%f", &yQ);
    printf("\n");
    printf("Y(%f;%f)\n", yQ, yQ);
    printf("\n");

    if (xP==xQ)
    {
        printf("erreur");
        return 0;
    }

    float a= ((yP-yQ)/(xP-xQ));
    printf("a = %f\n", a);
    float b= yP-a*xP;
    printf("b = %f\n", b);
    printf("f(x) = %fx + %f",a,b);



    float a1;
    printf("entrez coef directeur de la droite 1 :" );
    scanf("%f", &a1);
    float(b1);
    printf("entrez ordonne a l origine de la droite 1:");
    scanf("%f",&b1);
    float(a2);
    printf("entrez coef directeur de la droite 2 :" );
    scanf("%f",&a2);
    float(b2);
    printf("entrez ordonne a l origine de la droite 2:");
    scanf("%f",&b2);
    printf("\n");

    float xI;
    float yI;
    xI=(b2-b1)/(a1-a2);
    yI= a1*xI + b1;
    printf("Intersection : I(xI=%f,yI=%f)", xI, yI);


    int J;
    printf("entrez le nombre de jour(s) : ");
    scanf("%d", &J);
    int semaines = (J/6);
    int mois = (semaines/5);
    int annees = (mois / 12);
    int siecles = (annees/100);
    int t0 = (J-6*semaines);
    printf("jours =%d\n", t0);
    int t1 = (semaines-5*mois);
    printf("semaines = %d\n",t1);
    int t2 = (mois-12*annees);
    printf("mois = %d\n",t2);
    int t3 = (annees-100*siecles);
    printf("annees = %d\n",t3);

    printf("%d siecles, %d mois, %d semaines, %d jours", t3, t2, t1, t0);


    int age;
    printf("entrez votre age : ");
    scanf("%d", &age);
    if (age<26)
        printf("vous avez le droit au tarif jeune\n");
    else
        printf("vous n avez pas le droit au tarif jeune\n");



    int age;
    printf("entrez votre age : ");
    scanf("%d", &age);
    if (age<26 && age>60)
        printf("vous avez le droit au tarif reduit\n");
    else
        printf("vous n avez pas le droit au tarif reduit\n");

    char saison;
    printf("taper 'p' pour printemps\n");
    printf("taper 'e' pour ete\n");
    printf("taper 'a' pour automne\n");
    printf("taper 'h' pour hiver\n");
    scanf("%c", &saison);
    if (saison=='p')
        printf("hiver");
    if (saison=='e')
        printf("ete");
    if (saison=='a')
        printf("automne");
    if (saison=='h')
        printf("hiver");
    else
        printf("erreur");

    float n1;
    float n2;
    float n3;
    float c1;
    float c2;
    float c3;
    float moyenne;
    printf("entrez vos notes\n");
    scanf("%f", &n1);
    scanf(" %f", &n2);
    scanf(" %f", &n3);
    printf("et vos coefficients respectifs\n");
    scanf(" %f", &c1);
    scanf(" %f", &c2);
    scanf(" %f", &c3);
    moyenne = (n1*c1+n2*c2+n3*c3)/(c1+c2+c3);
    printf("moyenne=%f\n", moyenne);
    if (moyenne<10)
        printf("non Recu");
    if (moyenne>=10)
        printf("adimissible");

 */
    /*int i;
    int j;
    float array[4];
    float array2[4];
    int location;
    int minArray;
    float minimum;

    printf("entrez vos notes\n");

    for (i = 0; i < 4; i++)
        scanf("%f", &array[i]);

    minimum = array[0];

    for (i = 1; i < 4; i++)
    {
        if (array[i] < minimum) {
            minimum  = array[i];
            location = i;
        }
    }

    printf("La pire note est %f, située %d.\n", minimum, location);*/

    float n1;
    float n2;
    float n3;
    float n4;
    float moyenne;

    printf("entrez votre première note\n");
    scanf("%f", &n1);
    printf("entrez votre deuxième note\n");
    scanf("%f", &n2);
    printf("entrez votre troisième note\n");
    scanf("%f", &n3);
    printf("entrez votre quatrième note\n");
    scanf("%f", &n4);

    if (n1 <= n2 && n1 <= n3 && n1 <= n4) {
        // N1 est minimum
        printf("La moyenne des trois meilleures notes est %f", (n2+n3+n4)/3);
    }
    else if (n2 <= n1 && n2 <= n3 && n2 <= n4) {
        // N2 est minimum
        printf("La moyenne des trois meilleures notes est %f", (n1+n3+n4)/3);
    }
    else if (n3 <= n1 && n3 <= n2 && n3 <= n4) {
        // N3 est minimum
        printf("La moyenne des trois meilleures notes est %f", (n1+n2+n4)/3);
    }
    else if (n4 <= n1 && n4 <= n3 && n4 <= n2) {
        // N3 est minimum
        printf("La moyenne des trois meilleures notes est %f", (n1+n2+n3)/3);
    }

    return 0;
}
