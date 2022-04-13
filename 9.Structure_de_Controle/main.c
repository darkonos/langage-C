#include <stdio.h>
#include <stdlib.h>
#include "fct.c"


int main() {

 //Création d'une variable personne de type stuct Personne
 // struct Personne personne;

 //En utilisant l'Alias
 Personne personne;
 
 initialisation(&personne);

  printf("Vos informations : \n\n");
    printf("Votre nom : %s \n", personne.nom);
    printf("Votre prenom : %s \n", personne.prenom);
    printf("Votre age : %d \n", personne.age);
    printf("Votre adresse : %s \n", personne.adresse);

return 0;
}




