/* Lire une chaîne "formatée" avec fscanf

Cette fonction lit dans un fichier qui doit avoir été écrit d'une manière précise.
Supposons que votre fichier contienne trois nombres séparés par un espace, qui sont par exemple
 les trois plus hauts scores obtenus à votre jeu :  15 20 30  .

Vous voudriez récupérer chacun de ces nombres dans une variable de type int  .
La fonction fscanf  va vous permettre de faire ça rapidement. */


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    int score[3] = {0}; // Tableau des 3 meilleurs scores
 
    fichier = fopen("test.txt", "r");
 
    if (fichier != NULL)
    {
        fscanf(fichier, "%d %d %d", &score[0], &score[1], &score[2]);
        printf("Les meilleurs scores sont : %d, %d et %d", score[0], score[1], score[2]);
 
        fclose(fichier);
    }
 
    return 0;
}