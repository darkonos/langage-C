/* Prototype de fonction */
#ifndef PERSONNE_H
#define PERSONNE_H

extern int menu();

//Création d'une structure avec 4 sous variables
struct Personne
{
    char nom[100];
    char prenom[100];
    int age;
    char adresse[1000];   
};

//Création d'un Alias pour éviter d'écrire struct à la création d'une variable
typedef struct Personne Personne;

/* LES FONCTIONS */

void initialisation(Personne *personne);


#endif
