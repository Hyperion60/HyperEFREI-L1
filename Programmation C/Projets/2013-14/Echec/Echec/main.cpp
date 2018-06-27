#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "Pause.h"
#include "verificationpresenceimage.h"


int main(int argc, char *argv[])
{
    int x;
    int y;
    int continuer = 1;
    int numero;


    ///DECLARATION DES SURFACES ALLOUEES AUX PIECES
    SDL_Surface *echiquier = NULL;
    SDL_Surface *plateau = NULL;
    SDL_Surface *foublanc = NULL;
    SDL_Surface *founoir = NULL;
    SDL_Surface *cavalierblanc = NULL;
    SDL_Surface *cavaliernoir = NULL;
    SDL_Surface *tourblanche = NULL;
    SDL_Surface *tournoire= NULL;
    SDL_Surface *roiblanc = NULL;
    SDL_Surface *roinoir = NULL;
    SDL_Surface *dameblanche = NULL;
    SDL_Surface *damenoire = NULL;
    SDL_Surface *pionblanc = NULL;
    SDL_Surface *pionnoir = NULL;
    SDL_Surface *caseblanche = NULL;
    SDL_Surface *casenoire = NULL;
    SDL_Surface *caseverte = NULL;
    SDL_Surface *caseclic = NULL;
    SDL_Surface *casedestination = NULL;
    SDL_Surface *A = NULL;
    SDL_Surface *B = NULL;
    SDL_Surface *C = NULL;
    SDL_Surface *D = NULL;
    SDL_Surface *E = NULL;
    SDL_Surface *F = NULL;
    SDL_Surface *G = NULL;
    SDL_Surface *H = NULL;
    SDL_Surface *c1 = NULL;
    SDL_Surface *c2 = NULL;
    SDL_Surface *c3 = NULL;
    SDL_Surface *c4 = NULL;
    SDL_Surface *c5 = NULL;
    SDL_Surface *c6 = NULL;
    SDL_Surface *c7 = NULL;
    SDL_Surface *c8 = NULL;

    ///DECLARATION DES VARIABLES DE POSITIONS
    SDL_Rect position;
    SDL_Rect poscaseblanche;
    SDL_Rect poscasenoire;
    SDL_Rect poscaseverte;
    SDL_Rect poscaseclic;
    SDL_Rect posdestination;
    SDL_Rect positionplateau;
    SDL_Rect posfoublanc1;
    SDL_Rect posfoublanc2;
    SDL_Rect posfounoir1;
    SDL_Rect posfounoir2;
    SDL_Rect poscavalierblanc1;
    SDL_Rect poscavalierblanc2;
    SDL_Rect poscavaliernoir1;
    SDL_Rect poscavaliernoir2;
    SDL_Rect postourblanche1;
    SDL_Rect postourblanche2;
    SDL_Rect postournoire1;
    SDL_Rect postournoire2;
    SDL_Rect posroiblanc;
    SDL_Rect posroinoir;
    SDL_Rect posdameblanche;
    SDL_Rect posdamenoire;
    SDL_Rect pospionblanc1;
    SDL_Rect pospionblanc2;
    SDL_Rect pospionblanc3;
    SDL_Rect pospionblanc4;
    SDL_Rect pospionblanc5;
    SDL_Rect pospionblanc6;
    SDL_Rect pospionblanc7;
    SDL_Rect pospionblanc8;
    SDL_Rect pospionnoir1;
    SDL_Rect pospionnoir2;
    SDL_Rect pospionnoir3;
    SDL_Rect pospionnoir4;
    SDL_Rect pospionnoir5;
    SDL_Rect pospionnoir6;
    SDL_Rect pospionnoir7;
    SDL_Rect pospionnoir8;
    SDL_Rect lA;
    SDL_Rect lB;
    SDL_Rect lC;
    SDL_Rect lD;
    SDL_Rect lE;
    SDL_Rect lF;
    SDL_Rect lG;
    SDL_Rect lH;
    SDL_Rect posc1;
    SDL_Rect posc2;
    SDL_Rect posc3;
    SDL_Rect posc4;
    SDL_Rect posc5;
    SDL_Rect posc6;
    SDL_Rect posc7;
    SDL_Rect posc8;

    ///CHARGEMENT DES IMAGES
    plateau = IMG_Load("Echiquier.bmp");
    A = IMG_Load("lettre_a1.png");
    B = IMG_Load("lettre_b.png");
    C = IMG_Load("lettre_c.png");
    D = IMG_Load("lettre_d.png");
    E = IMG_Load("lettre_e.png");
    F = IMG_Load("lettre_f.png");
    G = IMG_Load("lettre_g.png");
    H = IMG_Load("lettre_h1.png");
    c1 = IMG_Load("chiffre-1.png");
    c2 = IMG_Load("chiffre-2.png");
    c3 = IMG_Load("chiffre-3.png");
    c4 = IMG_Load("chiffre-4.png");
    c5 = IMG_Load("chiffre-5.png");
    c6 = IMG_Load("chiffre-6.png");
    c7 = IMG_Load("chiffre-7.png");
    c8 = IMG_Load("chiffre-8.png");
    pionblanc = IMG_Load("pawn_nw.png");
    pionnoir = IMG_Load("pawn_nb.png");
    foublanc = IMG_Load("bishop_nw.png");
    founoir = IMG_Load("bishop_nb.png");
    cavalierblanc = IMG_Load("knight_nw.png");
    cavaliernoir = IMG_Load("knight_nb.png");
    tourblanche = IMG_Load("rook_nw.png");
    tournoire = IMG_Load("rook_nb.png");
    roiblanc = IMG_Load("king_nw.png");
    roinoir = IMG_Load("king_nb.png");
    dameblanche = IMG_Load("queen_nw.png");
    damenoire = IMG_Load("queen_nb.png");


    ///DECLARATION DES EVENEMENTS
    SDL_Event clic;
    SDL_Event destination;
    SDL_Event piece;

    if (SDL_Init(SDL_INIT_VIDEO) == -1) /// Démarrage de la SDL. Si erreur :
    {
        fprintf(stderr, "Erreur d'initialisation de la SDL : %s\n", SDL_GetError()); /// Écriture de l'erreur
        exit(EXIT_FAILURE); /// On quitte le programme
    }

    echiquier = SDL_SetVideoMode(1020, 540, 32, SDL_HWSURFACE | SDL_DOUBLEBUF); /// On tente d'ouvrir une fenêtre

    if (echiquier == NULL) /// Si l'ouverture a échoué, on le note et on arrête
    {
        fprintf(stderr, "Impossible de charger le mode vidéo : %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }

    SDL_FillRect(echiquier, NULL, SDL_MapRGB(echiquier -> format, 75, 75, 75)); /// Remplissage de l'echiquier en fond gris

    caseblanche = SDL_CreateRGBSurface(SDL_SWSURFACE, 60, 60, 32, 0, 0, 0, 0); /// Creation de la case blanche
    casenoire = SDL_CreateRGBSurface(SDL_SWSURFACE, 60, 60, 32, 0, 0, 0, 0); /// Creation de la case coloree
    caseverte = SDL_CreateRGBSurface(SDL_SWSURFACE, 60,60, 32, 0, 0, 0, 0); /// Creation de la case verte
    SDL_WM_SetCaption("Echec", NULL); /// Nom de la fenetre

    /// Placement des cases sur l'echiquier

    verification(); /// Verification de la présence des images avant de commencer à les afficher

    positionplateau.x = 0;
    positionplateau.y = 0;
    SDL_BlitSurface(plateau, NULL, echiquier, &positionplateau);

    /// Affichage des chiffres, lettres et pieces
    posc1.x = 0;
    posc1.y = 480 ;
    SDL_BlitSurface(c1, NULL, echiquier, &posc1);

    posc2.x = 0;
    posc2.y = 420;
    SDL_BlitSurface(c2, NULL, echiquier, &posc2);

    posc3.x = 0;
    posc3.y = 360;
    SDL_BlitSurface(c3, NULL, echiquier, &posc3);

    posc4.x = 0;
    posc4.y = 300;
    SDL_BlitSurface(c4, NULL, echiquier, &posc4);

    posc5.x = 0;
    posc5.y = 240;
    SDL_BlitSurface(c5, NULL, echiquier, &posc5);

    posc6.x = 0;
    posc6.y = 180;
    SDL_BlitSurface(c6, NULL, echiquier, &posc6);

    posc7.x = 0;
    posc7.y = 120;
    SDL_BlitSurface(c7, NULL, echiquier, &posc7);

    posc8.x = 0;
    posc8.y = 60;
    SDL_BlitSurface(c8, NULL, echiquier, &posc8);

    lA.x = 60;
    lA.y = 0;
    SDL_BlitSurface(A, NULL, echiquier, &lA);

    lB.x = 120;
    lB.y = 0;
    SDL_BlitSurface(B, NULL, echiquier, &lB);

    lC.x = 180;
    lC.y = 0;
    SDL_BlitSurface(C, NULL, echiquier, &lC);

    lD.x = 240;
    lD.y = 0;
    SDL_BlitSurface(D, NULL, echiquier, &lD);

    lE.x = 300;
    lE.y = 0;
    SDL_BlitSurface(E, NULL, echiquier, &lE);

    lF.x = 360;
    lF.y = 0;
    SDL_BlitSurface(F, NULL, echiquier, &lF);

    lG.x = 420;
    lG.y = 0;
    SDL_BlitSurface(G, NULL, echiquier, &lG);

    lH.x = 480;
    lH.y = 0;
    SDL_BlitSurface(H, NULL, echiquier, &lH);

    for (numero = 0 ; numero < 8 ; numero = numero + 1)
    {
            if (numero == 0)
            {
                pospionblanc1.x = 60;
                pospionblanc1.y = 420;
                SDL_BlitSurface(pionblanc, NULL, echiquier, &pospionblanc1);

                pospionnoir1.x = 60;
                pospionnoir1.y = 120;
                SDL_BlitSurface(pionnoir, NULL, echiquier, &pospionnoir1);

                poscavalierblanc1.x = 120;
                poscavalierblanc1.y = 480;
                SDL_BlitSurface(cavalierblanc, NULL, echiquier, &poscavalierblanc1);

                poscavaliernoir1.x = 120;
                poscavaliernoir1.y = 60;
                SDL_BlitSurface(cavaliernoir, NULL, echiquier, &poscavaliernoir1);

                postourblanche1.x = 60;
                postourblanche1.y = 480;
                SDL_BlitSurface(tourblanche, NULL, echiquier, &postourblanche1);

                postournoire1.x = 60;
                postournoire1.y = 60;
                SDL_BlitSurface(tournoire, NULL, echiquier, &postournoire1);

                posfoublanc1.x = 180;
                posfoublanc1.y = 480;
                SDL_BlitSurface(foublanc, NULL, echiquier, &posfoublanc1);

                posfounoir1.x = 180;
                posfounoir1.y = 60;
                SDL_BlitSurface(founoir, NULL, echiquier, &posfounoir1);
            }
            else if (numero == 1)
            {
                pospionblanc2.x = 120;
                pospionblanc2.y = 420;
                SDL_BlitSurface(pionblanc, NULL, echiquier, &pospionblanc2);

                pospionnoir2.x = 120;
                pospionnoir2.y = 120;
                SDL_BlitSurface(pionnoir, NULL, echiquier, &pospionnoir2);

                poscavalierblanc2.x = 420;
                poscavalierblanc2.y = 480;
                SDL_BlitSurface(cavalierblanc, NULL, echiquier, &poscavalierblanc2);

                poscavaliernoir2.x = 420;
                poscavaliernoir2.y = 60;
                SDL_BlitSurface(cavaliernoir, NULL, echiquier, &poscavaliernoir2);

                postourblanche2.x = 480;
                postourblanche2.y = 480;
                SDL_BlitSurface(tourblanche, NULL, echiquier, &postourblanche2);

                postournoire2.x = 480;
                postournoire2.y = 60;
                SDL_BlitSurface(tournoire, NULL, echiquier, &postournoire2);

                posfoublanc2.x = 360;
                posfoublanc2.y = 480;
                SDL_BlitSurface(foublanc, NULL, echiquier, &posfoublanc2);

                posfounoir2.x = 360;
                posfounoir2.y = 60;
                SDL_BlitSurface(founoir, NULL, echiquier, &posfounoir2);
            }
            else if (numero == 2)
            {
                pospionblanc3.x = 180;
                pospionblanc3.y = 420;
                SDL_BlitSurface(pionblanc, NULL, echiquier, &pospionblanc3);

                pospionnoir3.x = 180;
                pospionnoir3.y = 120;
                SDL_BlitSurface(pionnoir, NULL, echiquier, &pospionnoir3);
            }
            else if (numero == 3)
            {
                pospionblanc4.x = 240;
                pospionblanc4.y = 420;
                SDL_BlitSurface(pionblanc, NULL, echiquier, &pospionblanc4);

                pospionnoir4.x = 240;
                pospionnoir4.y = 120;
                SDL_BlitSurface(pionnoir, NULL, echiquier, &pospionnoir4);
            }
            else if (numero == 4)
            {
                pospionblanc5.x = 300;
                pospionblanc5.y = 420;
                SDL_BlitSurface(pionblanc, NULL, echiquier, &pospionblanc5);

                pospionnoir5.x = 300;
                pospionnoir5.y = 120;
                SDL_BlitSurface(pionnoir, NULL, echiquier, &pospionnoir5);
            }
            else if (numero == 5)
            {
                pospionblanc6.x = 360;
                pospionblanc6.y = 420;
                SDL_BlitSurface(pionblanc, NULL, echiquier, &pospionblanc6);

                pospionnoir6.x = 360;
                pospionnoir6.y = 120;
                SDL_BlitSurface(pionnoir, NULL, echiquier, &pospionnoir6);
            }
            else if (numero == 6)
            {
                pospionblanc7.x = 420;
                pospionblanc7.y = 420;
                SDL_BlitSurface(pionblanc, NULL, echiquier, &pospionblanc7);

                pospionnoir7.x = 420;
                pospionnoir7.y = 120;
                SDL_BlitSurface(pionnoir, NULL, echiquier, &pospionnoir7);
            }
            else
            {
                pospionblanc8.x = 480;
                pospionblanc8.y = 420;
                SDL_BlitSurface(pionblanc, NULL, echiquier, &pospionblanc8);

                pospionnoir8.x = 480;
                pospionnoir8.y = 120;
                SDL_BlitSurface(pionnoir, NULL, echiquier, &pospionnoir8);
            }
        }

    posdameblanche.x = 240;
    posdameblanche.y = 480;
    SDL_BlitSurface(dameblanche, NULL, echiquier, &posdameblanche);

    posdamenoire.x = 240;
    posdamenoire.y = 60;
    SDL_BlitSurface(damenoire, NULL, echiquier, &posdamenoire);

    posroiblanc.x = 300;
    posroiblanc.y = 480;
    SDL_BlitSurface(roiblanc, NULL, echiquier, &posroiblanc);

    posroinoir.x = 300;
    posroinoir.y = 60;
    SDL_BlitSurface(roinoir, NULL, echiquier, &posroinoir);
    /// Fin de l'affichage

    SDL_Flip(echiquier); /// Met a jour la fenetre

 while(continuer)
    {
        SDL_WaitEvent(&clic);
        switch(clic.type)
        {
            case SDL_QUIT:
            {
                continuer = 0;
                break;
            }
            case SDL_MOUSEBUTTONUP:
            {
                if (clic.button.button == SDL_BUTTON_LEFT)
                {
                    if (clic.button.x < 120 && clic.button.x >= 60)
                    {
                        clic.button.x = 60;
                    }
                    else if (clic.button.x < 180 && clic.button.x >= 120)
                    {
                        clic.button.x = 120;
                    }
                    else if (clic.button.x < 240 && clic.button.x >= 180)
                    {
                        clic.button.x = 180;
                    }
                    else if (clic.button.x < 300 && clic.button.x >= 240)
                    {
                        clic.button.x = 240;
                    }
                    else if (clic.button.x < 360 && clic.button.x >= 300)
                    {
                        clic.button.x = 300;
                    }
                    else if (clic.button.x < 420 && clic.button.x >= 360)
                    {
                        clic.button.x = 360;
                    }
                    else if (clic.button.x < 480 && clic.button.x >= 420)
                    {
                        clic.button.x = 420;
                    }
                    else if (clic.button.x < 540 && clic.button.x >= 480)
                    {
                        clic.button.x = 480;
                    }

                    if (clic.button.y < 120 && clic.button.y >= 60)
                    {
                        clic.button.y = 60;
                    }
                    else if (clic.button.y < 180 && clic.button.y >= 120)
                    {
                        clic.button.y = 120;
                    }
                    else if (clic.button.y < 240 && clic.button.y >= 180)
                    {
                        clic.button.y = 180;
                    }
                    else if (clic.button.y < 300 && clic.button.y >= 240)
                    {
                        clic.button.y = 240;
                    }
                    else if (clic.button.y < 360 && clic.button.y >= 300)
                    {
                        clic.button.y = 300;
                    }
                    else if (clic.button.y < 420 && clic.button.y >= 360)
                    {
                        clic.button.y = 360;
                    }
                    else if (clic.button.y < 480 && clic.button.y >= 420)
                    {
                        clic.button.y = 420;
                    }
                    else if (clic.button.y < 540 && clic.button.y >= 480)
                    {
                        clic.button.y = 480;
                    }
                    poscaseclic.x = clic.button.x;
                    poscaseclic.y = clic.button.y;
                    if (poscaseclic.x/60 == 1 || poscaseclic.x/60 == 3 || poscaseclic.x/60 == 5 || poscaseclic.x/60 == 7)
                    {
                        if (poscaseclic.y/60 == 1 || poscaseclic.y/60 == 3 || poscaseclic.y/60 == 5 || poscaseclic.y/60 == 7)
                        {
                            SDL_FillRect(caseblanche, NULL, SDL_MapRGB(echiquier -> format, 255, 255, 255));
                            SDL_BlitSurface(caseblanche, NULL, echiquier, &poscaseclic);
                        }
                        else
                        {
                            SDL_FillRect(casenoire, NULL, SDL_MapRGB(echiquier -> format, 127, 127, 127));
                            SDL_BlitSurface(casenoire, NULL, echiquier, &poscaseclic);
                        }
                    }
                    else if (poscaseclic.x/60 == 2 || poscaseclic.x/60 == 4 || poscaseclic.x/60 == 6 || poscaseclic.x/60 == 8)
                    {
                        if (poscaseclic.y/60 == 2 || poscaseclic.y/60 == 4 || poscaseclic.y/60 == 6 || poscaseclic.y/60 == 8)
                        {
                            SDL_FillRect(caseblanche, NULL, SDL_MapRGB(echiquier -> format, 255, 255, 255));
                            SDL_BlitSurface(caseblanche, NULL, echiquier, &poscaseclic);
                        }
                        else
                        {
                            SDL_FillRect(casenoire, NULL, SDL_MapRGB(echiquier -> format, 127, 127, 127));
                            SDL_BlitSurface(casenoire, NULL, echiquier, &poscaseclic);
                        }
                    }
                    if (poscaseclic.x == posdameblanche.x && poscaseclic.y == posdameblanche.y)
                    {
                        SDL_FillRect(caseverte, NULL, SDL_MapRGB(echiquier -> format, 125, 255, 125));
                        poscaseverte.x = 600;
                        poscaseverte.y = 420;
                        SDL_BlitSurface(caseverte, NULL, echiquier, &poscaseverte);
                        SDL_WaitEvent(&destination);

                        switch(destination.type)
                        {
                            SDL_Flip(echiquier);
                            case SDL_MOUSEBUTTONUP:
                            {

                                if (destination.button.button == SDL_BUTTON_RIGHT)
                                {

                                    if (destination.button.x < 120 && destination.button.x >= 60)
                                    {
                                        destination.button.x = 60;
                                    }
                                    else if (destination.button.x < 180 && destination.button.x >= 120)
                                    {
                                        destination.button.x = 120;
                                    }
                                    else if (destination.button.x < 240 && destination.button.x >= 180)
                                    {
                                        destination.button.x = 180;
                                    }
                                    else if (destination.button.x < 300 && destination.button.x >= 240)
                                    {
                                        destination.button.x = 240;
                                    }
                                    else if (destination.button.x < 360 && destination.button.x >= 300)
                                    {
                                        destination.button.x = 300;
                                    }
                                    else if (destination.button.x < 420 && destination.button.x >= 360)
                                    {
                                        destination.button.x = 360;
                                    }
                                    else if (destination.button.x < 480 && destination.button.x >= 420)
                                    {
                                        destination.button.x = 420;
                                    }
                                    else if (destination.button.x < 540 && destination.button.x >= 480)
                                    {
                                        destination.button.x = 480;
                                    }

                                    if (destination.button.y < 120 && destination.button.y >= 60)
                                    {
                                        destination.button.y = 60;
                                    }
                                    else if (destination.button.y < 180 && destination.button.y >= 120)
                                    {
                                        destination.button.y = 120;
                                    }
                                    else if (destination.button.y < 240 && destination.button.y >= 180)
                                    {
                                        destination.button.y = 180;
                                    }
                                    else if (destination.button.y < 300 && destination.button.y >= 240)
                                    {
                                        destination.button.y = 240;
                                    }
                                    else if (destination.button.y < 360 && destination.button.y >= 300)
                                    {
                                        destination.button.y = 300;
                                    }
                                    else if (destination.button.y < 420 && destination.button.y >= 360)
                                    {
                                        destination.button.y = 360;
                                    }
                                    else if (destination.button.y < 480 && destination.button.y >= 420)
                                    {
                                        destination.button.y = 420;
                                    }
                                    else if (destination.button.y < 540 && destination.button.y >= 480)
                                    {
                                        destination.button.y = 480;
                                    }
                                    posdestination.x = destination.button.x;
                                    posdestination.y = destination.button.y;
                                    if (posdestination.x == posdameblanche.x && posdestination.y%60 == 0 && posdestination.y != posdameblanche.y)
                                    {
                                        posdameblanche.x = posdestination.x;
                                        posdameblanche.y = posdestination.y;
                                        SDL_BlitSurface (dameblanche, NULL, echiquier, &posdameblanche);
                                        SDL_Flip(echiquier);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }


    pause (); /// Empeche la fenetre de se fermer avant le clic sur la croix

    /// Libere la place allouee aux differentes surfaces
    SDL_FreeSurface(caseblanche);
    SDL_FreeSurface(casenoire);
    SDL_FreeSurface(caseverte);
    SDL_FreeSurface(pionblanc);
    SDL_FreeSurface(pionnoir);
    SDL_FreeSurface(cavalierblanc);
    SDL_FreeSurface(cavaliernoir);
    SDL_FreeSurface(foublanc);
    SDL_FreeSurface(founoir);
    SDL_FreeSurface(tourblanche);
    SDL_FreeSurface(tournoire);
    SDL_FreeSurface(roiblanc);
    SDL_FreeSurface(roinoir);
    SDL_FreeSurface(dameblanche);
    SDL_FreeSurface(damenoire);
    SDL_FreeSurface(A);
    SDL_FreeSurface(B);
    SDL_FreeSurface(C);
    SDL_FreeSurface(D);
    SDL_FreeSurface(E);
    SDL_FreeSurface(F);
    SDL_FreeSurface(G);
    SDL_FreeSurface(H);
    SDL_FreeSurface(c1);
    SDL_FreeSurface(c2);
    SDL_FreeSurface(c3);
    SDL_FreeSurface(c4);
    SDL_FreeSurface(c5);
    SDL_FreeSurface(c6);
    SDL_FreeSurface(c7);
    SDL_FreeSurface(c8);
    SDL_FreeSurface(plateau);
    SDL_FreeSurface(echiquier);

    /// Ferme la fenetre
    SDL_Quit();

    return EXIT_SUCCESS;
}
