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
/******************************************************************************************
TOUTES LES VALEURS SONT CODEES EN DECIMALE POUR NOUS FACILITER LA VISUALISATION DU RESULTAT
******************************************************************************************/

int variable_1 = 2;      // declaration d'une variable type int
char variable_2 = 5;     // declaration d'une variable type char

int *pointeur_1 = 0;         	// declaration d'un pointeur qui va pointer sur une variable de type int
char *pointeur_2 = NULL;        // declaration d'un pointeur qui va pointer sur une variable de type char

// declaration de pointeurs non utilises

/** c'est pour cela que l'on prefere la notation 'int *pointeur' que 'int* pointeur'
    cela permet de declarer plusieurs types de pointeurs a la suite**/

int *autre_pointeur = 0,*encore_un_autre = 0,*toujours_de_type_int = 0;


/*
-----------------------------------------
			PROGRAMME PRINCIPAL
-----------------------------------------
*/
int main()
{
/*initialisation des pointeurs*/
pointeur_1 = &variable_1;    // initialisation du pointeur avec l'adresse de variable_1
pointeur_2 = &variable_2;    // initialisation du pointeur avec l'adresse de variable_2


// %d affiche le resultat en decimale
// %p donne la valeur en representation hexadecimale
// affichage de l'adresse des variables

/*******On dit alors que le pointeur est reference*****************/

printf("Voici l'adresse pointee par pointeur_1 de variable_1: %d,\n",pointeur_1);
printf("Voici l'adresse pointee par pointeur_2 de variable_2: %p,\n\n",pointeur_2);
printf("On represente aussi l'adresse de pointeur_2 de variable_2 en majuscule: %X,\n\n",pointeur_2);


// affichage des valeurs des variables
/*******On dit alors que le pointeur est dereference*****************/

printf("Voici le contenu de variable_1 pointe par pointeur_1 : %d,\n",*pointeur_1);
printf("Voici le contenu de variable_2 pointe par pointeur_2 : %p,\n\n",*pointeur_2);

// affichage de l'adresse des pointeurs
printf("Voici l'adresse du pointeur_1 : %d,\n",&pointeur_1);
printf("Voici l'adresse du pointeur_2 : %p,\n\n",&pointeur_2);

   return 0;
}

