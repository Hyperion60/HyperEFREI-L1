struct t_date
{
    int jour;
    int mois;
    int annee;
};

struct t_adresse_postale
{
    char rue[50];
    int numero_rue;
    int code_postal;
    char ville[50];
    char pays[50];
};

struct t_code_livre
{
    char type_livre[3];
    int numero_livre;
};

struct t_emprunter
{
    t_code_livre emprunt_1;
    t_date date_1;
    t_date date_2;
    char nom[50];

};

struct t_restitution
{
    t_code_livre emprunt;
    char nom[50];
};

struct t_adherent
{
    t_adresse_postale adresse_adherent;
    char nom[50];
    char prenom[50];
    char adresse_mail[50];
    char profession[50];

};

struct t_auteur
{
    char nom[50];
    char prenom[50];

};

struct t_livre
{
    char titre[50];
    t_auteur auteur;
    t_code_livre code_livre;
    int nb_total;
    int nb_disponible;

};

