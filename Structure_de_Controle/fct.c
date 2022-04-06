/* FONCTIONS */

#include "fct.h"

void initialisation(Personne *personne)
{
   printf("Nom : ");
   scanf("%s", personne->nom);
   printf("Prenom : ");
   scanf("%s", personne->prenom);
   printf("Age : ");
   scanf("%d", &personne->age);
   printf("Adresse : ");
   scanf("%s", personne->adresse); 

}