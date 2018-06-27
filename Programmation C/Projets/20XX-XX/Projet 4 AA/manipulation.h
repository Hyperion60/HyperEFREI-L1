typedef struct t_date t_date;
struct t_date
{
    int jour;
    int mois;
    int annee;
};

typedef struct t_adresse_postale t_adresse_postale;
struct t_adresse_postale
{
    char rue[50];
    int numero_rue;
    int code_postal;
    char ville[50];
    char pays[50];
};

typedef struct t_code_livre t_code_livre;
struct t_code_livre
{
    char type_livre[3];
    int numero_livre;
};

typedef struct t_emprunter t_emprunter;
struct t_emprunter
{
    t_code_livre emprunt_1;
    t_date date_1;
    t_date date_2;
    char nom[50];

};

typedef struct t_restitution t_restitution;
struct t_restitution
{
    t_code_livre emprunt;
    char nom[50];
};

typedef struct t_adherent t_adherent;
struct t_adherent
{
    t_adresse_postale adresse_adherent;
    char nom[50];
    char prenom[50];
    char adresse_mail[50];
    char profession[50];

};

typedef struct t_auteur t_auteur;
struct t_auteur
{
    char nom[50];
    char prenom[50];

};

typedef struct t_livre t_livre;
struct t_livre
{
    char titre[50];
    t_auteur auteur;
    t_code_livre code_livre;
    int nb_total;
    int nb_disponible;

};
