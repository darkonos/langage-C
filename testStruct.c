#include <stdio.h>
#include <stdlib.h>

//Déclaration d'une structure 

struct Voiture
{
    char model[30];
    char color[20];
    int power;
    float price;
}bmw, peugeot, renault;


int main() {

 printf("Modele du vehicule : ");
 scanf("%s", bmw.model);

 printf("le modele est %s \n", bmw.model);

return 0;
}