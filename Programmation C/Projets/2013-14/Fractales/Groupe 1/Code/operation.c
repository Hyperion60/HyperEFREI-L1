#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "complexe.h"

float module(float reelle, float imagin) /// Definit l'opération du module
{
    float modulecomp;

    modulecomp = powf(reelle,2) + powf(imagin,2); /// Le module d'un complexe est la racine de sa partie reelle au carre plus sa partie imaginaire au carre
    modulecomp = powf(modulecomp, 0.5); /// On fait la racine de la valeur precedente pour finir le calcul du module

    return modulecomp; /// On retourne la valeur calculee
}

