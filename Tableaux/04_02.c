/*

********************************************************
	NOM du projet :
********************************************************

Auteur(s) :
Date de la derniere revision :
Version :
Auteur(s) revision :
Date de revision :

Fonctionnalite :
				Ce projet permet d'effectuer l'affichage de chaines de caracteres
				et de calcul preprogramme.


Bibliotheques necessaires :
							stdio.h				-	natif pour le compilateur


Fonctions utilisees :



*/


/*
-----------------------------------------
Declaration des bibliotheques utilisees
-----------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

/*
-----------------------------------------
Declaration des equivalences
-----------------------------------------
*/


/*
-----------------------------------------
Declaration des prototypes de fonctions
-----------------------------------------
*/

/*
-----------------------------------------
Declaration globale des variables
-----------------------------------------
*/
/***********Les lignes sont separees par une virgule************/

// tableau initialise dans le main
char tableau0 [2][2];

// tableau initialise ici mais attention seul l'element[0][0]
// est initialise a 10
char tableau1 [5][5]={{10}};

// tableau initialise de 3 lignes et 2 colonnes
short tableau2[3][2] =   {{1, 2  },
                         {10, 20 },
                        {100, 200}};

// tableau initialise de 2 lignes et 3 colonnes
short tableau3[2][3] =   {{1000, 2000 ,3000 },
                         {10000, 20000,30000 }};

// declaration des variables qui servent aux index des structures de controles
// l'initialisation des index se fera automatiquement dans la boucle FOR.
char index_ligne=0;
char index_colonne=0;

/*
-----------------------------------------
			PROGRAMME PRINCIPAL
-----------------------------------------
*/
int main()
{

// declaration par element : nom[numero_ligne][numero_colonne]
    tableau0 [0][0]= 1;
    tableau0 [0][1]= 2;
    tableau0 [1][0]= 3;
    tableau0 [1][1]= 4;


    printf("\tLa taille des tableaux est connue !\n\n");
    printf("\tLes elements du tableau0 sont :\n\n");

/*****************La taille du tableau est connue*****************/

/* Pour chaque ligne ... */
    for (index_colonne=0; index_colonne<2; index_colonne++)
            {
        /* ... considerer chaque composante */
        for (index_ligne=0; index_ligne<2; index_ligne++)
               printf("%7d", tableau0[index_colonne][index_ligne]);
        /* Retour a la ligne */

        printf("\n");
            }
    printf("\n--------------------------------------------------\n");

    /*****************La taille du tableau est connue*****************/

    printf("\nLes elements du tableau1 qui sont initialises par une seule valeur est :\n\n");
/* Pour chaque ligne ... */
    for (index_colonne=0; index_colonne<5; index_colonne++)
            {
        /* ... considerer chaque composante */
        for (index_ligne=0; index_ligne<5; index_ligne++)
               printf("%7d", tableau1[index_colonne][index_ligne]);
        /* Retour a la ligne */

        printf("\n");
            }
    printf("\n--------------------------------------------------\n");

/*****************La taille du tableau est connue*****************/



    printf("\tLes elements du tableau2 [3][2] sont :\n\n");


 /* Pour chaque ligne ... */
 for (index_colonne=0; index_colonne<3; index_colonne++)
   {
    /* ... considerer chaque composante */
    for (index_ligne=0; index_ligne<2; index_ligne++)
           printf("%7d", tableau2[index_colonne][index_ligne]);
    /* Retour a la ligne */
    printf("\n");
   }

   printf("\n--------------------------------------------------\n");

/*****************La taille du tableau est connue*****************/


   printf("\tLes elements du tableau3 [2][3] sont :\n\n");


 /* Pour chaque ligne ... */
 for (index_colonne=0; index_colonne<2; index_colonne++)
   {
    /* ... considerer chaque composante */
    for (index_ligne=0; index_ligne<3; index_ligne++)
           printf("%7d", tableau3[index_colonne][index_ligne]);
    /* Retour a la ligne */
    printf("\n");
   }



 return 0;

}

