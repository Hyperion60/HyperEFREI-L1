#include <stdio.h>
#include <SDL/SDL.h>
#include <iostream>
#include "Structure.h"

void creation_fractale (SDL_Surface *fenetre, SDL_Surface *pixel, SDL_Surface *loc_ali, double x, double y, double zoom, int nb_iteration);


int main (int argc, char** argv)
{

    int quitter = 0, nb_iteration = 100; /// quitter correspond à la fin du programme, nb_iteration au nombre de passage dans la boucle //////
    double zoom = 1, cord_x=0, cord_y=0; /// Les coordonées de bases et le zoom sont initalisés
    SDL_Event event; ///On initialse les evenements de la SDL
    SDL_Surface *fenetre=NULL, *pixel=NULL, *loc_ali=NULL;  /// on initialise tout les pointeurs à NULL
    ///* 3 surfaces SDL sont crées, la première est la fenetre en elle meme, la deuxieme corresepond au pixel colorié

    SDL_Init(SDL_INIT_VIDEO);
    SDL_WM_SetCaption("Une fractale =)", 0); ///On donne un nom a la fenetre SDL

    fenetre = SDL_SetVideoMode(700,700,32, SDL_HWSURFACE|SDL_DOUBLEBUF); ///On defini la taille de la fenetre (650*640)
    pixel = SDL_CreateRGBSurface(SDL_HWSURFACE, 1,1,32,0,0,0,0);

    creation_fractale(fenetre, pixel, loc_ali, cord_x,cord_y, zoom, nb_iteration); /// On fait apparaitre la creation_fractale à l'aide de la fonction creation_fractale

    while (!quitter)
    {
        SDL_WaitEvent(&event); /// Attends la commande de l'utilisateur
        switch (event.type)
        {
            case SDL_QUIT:
                quitter =1;
                break;
            case SDL_KEYDOWN:
                {
                    switch (event.key.keysym.sym)
                    {
                    case SDLK_ESCAPE: /// changer la position dans la fractale et la vue, ici pour arreter la SDL
                        quitter =1;
                        break;
                    case SDLK_w:        /// zoom avant
                        creation_fractale(fenetre, pixel, loc_ali,cord_x,cord_y,zoom+=zoom/2,nb_iteration+=30);
                        break;
                    case SDLK_e:        /// zoom arrière
                        creation_fractale(fenetre,pixel,loc_ali,cord_x,cord_y,zoom-=zoom/3,nb_iteration-=30);
                        break;
                    case SDLK_RIGHT:    /// aller a droite
                        creation_fractale(fenetre, pixel, loc_ali, cord_x+=0.4/zoom, cord_y, zoom, nb_iteration);
                        break;
                    case SDLK_LEFT:     /// aller a gauche
                        creation_fractale(fenetre, pixel, loc_ali, cord_x-=0.4/zoom, cord_y, zoom, nb_iteration);
                        break;
                    case SDLK_UP:       /// aller  en haut
                        creation_fractale(fenetre, pixel, loc_ali, cord_x, cord_y-=0.4/zoom, zoom, nb_iteration);
                        break;
                    case SDLK_DOWN:     /// aller  en haut
                        creation_fractale(fenetre, pixel, loc_ali, cord_x, cord_y+=0.4/zoom, zoom, nb_iteration);
                        break;
                    default:
                        break;
                    }
                }
        }
    }
    return 0;
}

void creation_fractale(SDL_Surface *fenetre, SDL_Surface *pixel, SDL_Surface *loc_ali,double x,double y,double zoom, int nb_iteration)
{
    int n;
    complexe Z;     /// utilisation de la structure
    double ModuleZ, a ,b, temp;     /// valeurs du nombre complexe
    SDL_Rect position;
    SDL_FillRect(fenetre, NULL, SDL_MapRGB(fenetre->format, 255, 255, 255));


    for (int i=-fenetre->w/2; i<fenetre->w/2; i++)      /// nombre complexe de la forme z= a + ib
    {
        position.x= i+fenetre->w/2;                     /// coordonnées a en fonction de x
        a=4*i/((double)fenetre->w*zoom)+x;

        for (int j=-fenetre->h/2; j<fenetre->h/2; j++)
        {
            n= Z.imaginaire = Z.reel = 0;                   /// coordonnées b en fonction de y
            position.y =j+fenetre->h/2;
            b=4*j/((double) fenetre->h*zoom)+y;

            if ((-10<i && i<10 && j==0 ) || (-10<j && j<10 && i==0))        /// centrer la croix
                SDL_FillRect(pixel, NULL, SDL_MapRGB(pixel->format,0, 0, 0 )); /// Curseur blanc
            else
            {
                do
                {
                    n++;                    /// Nombre d'itération N
                    temp = Z.reel;
                    Z.reel = Z.reel*Z.reel-Z.imaginaire*Z.imaginaire+a;     /// calcul de la suite par récurence
                    Z.imaginaire=2*temp*Z.imaginaire+b;
                    ModuleZ = Z.imaginaire*Z.imaginaire+Z.reel*Z.reel;          /// calcul du module de Z
                }while (n<nb_iteration && ModuleZ<=4);                          /// Verification du module inférieur a 4 et non 2 car pas la racine du module

                if ( n==nb_iteration)
                    SDL_FillRect(pixel,NULL,SDL_MapRGB(pixel->format, 204 ,62,86)); /// Créer un pixel d'une couleur en fonction du nombre d'itération (fait un dégradé)
                else if (n < 20)
                    SDL_FillRect(pixel,NULL, SDL_MapRGB(pixel->format, 26*n/nb_iteration, 255*n/nb_iteration,12*3*n/nb_iteration));
                else if ((n >20) && (n <30))
                    SDL_FillRect (pixel, NULL, SDL_MapRGB(pixel->format, 35*n/nb_iteration, 179*n/nb_iteration,142*n/nb_iteration));
                else if ((n >30) && (n <50))
                    SDL_FillRect (pixel, NULL, SDL_MapRGB(pixel->format, 200*n/nb_iteration, 150*n/nb_iteration,50*n/nb_iteration));
                else if ((n >50) && (n <70))
                    SDL_FillRect (pixel, NULL, SDL_MapRGB(pixel->format, 250*n/nb_iteration, 50*n/nb_iteration,142*n/nb_iteration));
                else if ((n >70) && (n <80))
                    SDL_FillRect (pixel, NULL, SDL_MapRGB(pixel->format, 238*n/nb_iteration, 195*n/nb_iteration,104*n/nb_iteration));
                else if (n >80)
                    SDL_FillRect (pixel, NULL, SDL_MapRGB(pixel->format, 242*n/nb_iteration, 242*n/nb_iteration,242*n/nb_iteration));

            }
            SDL_BlitSurface(pixel,NULL,fenetre, &position); /// fait apparaitre le pixel
        }
    }
    position.x=10;
    position.y=10;
    SDL_Flip(fenetre); /// met à jour la fenetre
    return ;
}
