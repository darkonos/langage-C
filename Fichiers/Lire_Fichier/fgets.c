
/* fgets

Cette fonction lit au maximun une chaîne dans le fichier. Ça évite d'avoir à lire tous les caractères un par un.
La fonction lit au maximum une ligne (elle s'arrête au premier \n  qu'elle rencontre).
Si on désire lire plusieurs lignes, il faudra faire une boucle. */

#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 1000 //Tableau de taille 1000

int main() {

FILE *fichier = NULL;
char chaine[TAILLE_MAX] = ""; //Chaine vide de TAILLE_MAX

 fichier = fopen("text.txt", "r");

    if(fichier != NULL)
    {
        fgets(chaine, TAILLE_MAX, fichier); //On lit maximum TAILLE_MAX caractères du fichier, on stocke le tout dans "chaine"
        printf("%s", chaine); 

        fclose(fichier);
    }
    else
    {
        printf("ERREUR, le fichier est absent ! \n");
    }
   
return 0;
}