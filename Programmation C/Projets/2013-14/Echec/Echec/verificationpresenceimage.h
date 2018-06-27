#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>

void verification ()
{
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
    SDL_Surface *plateau = NULL;

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

    if (pionblanc == NULL)
    {
        exit (0);
    }
    else if (pionnoir == NULL)
    {
        exit (0);
    }
    else if (cavalierblanc == NULL)
    {
        exit (0);
    }
    else if (cavaliernoir == NULL)
    {
        exit (0);
    }
    else if (foublanc == NULL)
    {
        exit (0);
    }
    else if (founoir == NULL)
    {
        exit (0);
    }
    else if (tourblanche == NULL)
    {
        exit (0);
    }
    else if (tournoire == NULL)
    {
        exit (0);
    }
    else if (roiblanc == NULL)
    {
        exit (0);
    }
    else if (roinoir == NULL)
    {
        exit (0);
    }
    else if (dameblanche == NULL)
    {
        exit (0);
    }
    else if (damenoire == NULL)
    {
        exit (0);
    }
    else if (A == NULL)
    {
        exit(0);
    }
    else if (B == NULL)
    {
        exit(0);
    }
    else if (C == NULL)
    {
        exit(0);
    }
    else if (D == NULL)
    {
        exit(0);
    }
    else if (E == NULL)
    {
        exit(0);
    }
    else if (F == NULL)
    {
        exit(0);
    }
    else if (G == NULL)
    {
        exit(0);
    }
    else if (H == NULL)
    {
        exit(0);
    }
    else if (c1 == NULL)
    {
        exit (0);
    }
    else if (c2 == NULL)
    {
        exit (0);
    }
    else if (c3 == NULL)
    {
        exit (0);
    }
    else if (c4 == NULL)
    {
        exit (0);
    }
    else if (c5 == NULL)
    {
        exit (0);
    }
    else if (c6 == NULL)
    {
        exit (0);
    }
    else if (c7 == NULL)
    {
        exit (0);
    }
    else if (c8 == NULL)
    {
        exit (0);
    }
    else if (plateau == NULL)
    {
        exit(0);
    }
}
