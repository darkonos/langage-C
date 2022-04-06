/* Lire un caractère avec fgetc

fgetc  avance le curseur d'un caractère à chaque fois que vous en lisez un.
Si vous appelez fgetc  une seconde fois, la fonction lira donc le second caractère, puis le troisième et ainsi de suite.
Vous pouvez donc faire une boucle pour lire les caractères un par un dans le fichier. */

#include <stdio.h>
#include <stdlib.h>

int main() {

FILE *fichier = NULL;
int caractere = 0;

  fichier = fopen("text.txt", "r");

   if(fichier != NULL)
   {
       // Boucle de lecture des caractères un à un 
       do
       {
           caractere = fgetc(fichier); //On lit le caractère 
           printf("%c", caractere);

       } while (caractere != EOF); // On continue tant que fgetc n'a pas retourné EOF
       
       fclose(fichier);
   }

    else 
    {
        printf("Erreur, fichier introuvable ! \n");
    }

return 0;
}