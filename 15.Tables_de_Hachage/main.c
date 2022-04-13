#include <stdio.h>
#include <stdlib.h>

int hachage(char *chaine);

int main() {

char nom[40]= "";

    printf("***CALCUL DU HASH*** \n\n");

    printf("Votre nom : ");
    scanf("%s", nom);

printf("Indice genere : %d \n", hachage(nom));


return 0;
}

//Fonction de hachage 
int hachage(char *chaine)
{
    int i = 0, nombreHache = 0;

    for (i = 0 ; chaine[i] != '\0' ; i++)
    {
        nombreHache += chaine[i];
    }
    nombreHache %= 100;

    return nombreHache;
}

//Fonction de recherche 
