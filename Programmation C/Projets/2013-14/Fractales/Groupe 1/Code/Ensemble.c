#include <stdio.h>
#include <stdlib.h>
#include "complexe.h"
#include "operation.h"

int Mandelbrot (int abscisse, int ordonnee, int resolution_x, int resolution_y, int zoom, float x1, float x2, float y1, float y2)
{
    float tempo; /// Sert à stocker la partie relle du complexe pour le calcul

    complexe transcript; /// Sert a transcrire le point en complexe

    transcript.x = zoom * resolution_x/(x2 - x1); /// Transcrit le point de l'ecran en point du plan complexe
    transcript.y = zoom * resolution_y/(y2 - y1); /// Transcrit le point de l'ecran en point du plan complexe

    complexe c;
    c.x = abscisse / transcript.x + x1;
    c.y = ordonnee / transcript.y + y1;

    complexe verif; /// Definit le point a verifier
    verif.x = 0;
    verif.y = 0;

    int i = 0; /// L'iteration
    int imax = zoom * 500; /// Le nombre maximum d'iterations

    do
    {
        tempo = verif.x; /// On stocke la partie reelle dans la variable
        verif.x = verif.x * verif.x - verif.y * verif.y + c.x; /// On calcule la nouvelle partie reelle
        verif.y = 2 * verif.y * tempo + c.y; /// On calcule la nouvelle partie imaginaire
        i = i + 1; /// On signale que l'on a fait un tour de boucle
        if (i == 100 && module(verif.x, verif.y) < 1)
        {
            return -1;
        }
    }
    while (module(verif.x, verif.y) < 2 && i < imax); /// Si le module est plus petit que 2 et que l'on a pas encore atteint imax, on recommence

    if (i == imax) /// Si le point est dans l'ensemble
    {
        return -1; /// On renvoie 1
    }

    else /// Sinon
    {
        return i; /// On renvoie le nombre d'iterations, necessaire à l'affichage des couleurs
    }

}

int Julia (int abscisse, int ordonnee, int resolution_x, int resolution_y, int zoom, complexe centre, float x1, float x2, float y1, float y2)
{
    float tempo; /// Sert à stocker la partie relle du complexe pour le calcul

    complexe transcript; /// Sert a transcrire le point en complexe

    transcript.x = zoom * (resolution_x/(x2 - x1)); /// Transcrit le point de l'ecran en point du plan complexe
    transcript.y = zoom * (resolution_y/(y2 - y1)); /// Transcrit le point de l'ecran en point du plan complexe

    complexe verif; /// Definit le point a verifier
    verif.x = abscisse / transcript.x + x1;
    verif.y = ordonnee / transcript.y + y1;

    int i = 0; /// L'iteration
    int imax = zoom * 500; /// Le nombre maximum d'iterations

    do
    {
        tempo = verif.x; /// On stocke la partie reelle dans la variable
        verif.x = verif.x * verif.x - verif.y * verif.y + centre.x; /// On calcule la nouvelle partie reelle
        verif.y = 2 * verif.y * tempo + centre.y; /// On calcule la nouvelle partie imaginaire
        i = i + 1; /// On signale que l'on a fait un tour de boucle
    }
    while (module(verif.x, verif.y) < 2 && i < imax); /// Si le module est plus petit que 2 et que l'on a pas encore atteint imax, on recommence

    if (i == imax) /// Si le point est dans l'ensemble
    {
        return -1; /// On renvoie 1
    }

    else /// Sinon
    {
        return i; /// On renvoie le nombre d'iterations, necessaire à l'affichage des couleurs
    }

}
