#include <stdio.h>
#include <stdlib.h>

float affiche(float *tab, int taille);

int main() {

float notes[5]={};

   printf("ENTRE VOS NOTES : \n");
   printf("----------------\n");

   for(int i=0; i < 5; i++){

       printf("Note %d : ", i+1);
       scanf("%f", &notes[i]);
   }
    printf("\n");

    affiche(notes, 5);


return 0;
}

/********** FONTIONS **********/

float affiche(float *tab, int taille){
    
float sum = 0;

   printf("Recapitulatif des notes entrees : \n");
   printf("--------------------------------\n");

    for(int i=0; i < taille; i++){

        printf("Note N %d : %.2f \n",i+1, tab[i]);
    }

        printf("\n");

    for(int i = 0; i < taille; i++){

        sum += tab[i];
    }
        printf("Somme des notes : %.2f\n", sum);
         printf("Moyenne des notes : %.2f\n", sum / taille);
}