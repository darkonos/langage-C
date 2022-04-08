#include <stdio.h>
#include <stdlib.h>

int main() {

//la fonction fopen() renvoie un pointeur sur une structure de type FILE. Cette structure est définie dans stdio.h.
//Ici notre pointeur s'appelle *fichier
   FILE *fichier = NULL; //Pas la peine de faire struct FILE, le typedef a déja été fait par les Devs

   //nous allons appeler la fonction fopen() et récupérer la valeur qu'elle renvoie dans le pointeur fichier
   fichier = fopen("test.txt", "w");

      //Voir si l'ouverture du fichier a réussi
      if(fichier != NULL)
      {
          //On peut lire et ecrire dans le fichier

        //   fputc('A', fichier ); // Ecriture du caractere 'A' dans le fichier test.txt

        fprintf(fichier, "Ceci est un test ! ");
          fclose( fichier ); // On ferme le fichier qui a été ouvert afin de libérer la mémoire
      }
          else
          {
              //Message d'erreur
              printf("Impossible d'ouvrir le fichier test.txt \n");
          }


return 0;
}