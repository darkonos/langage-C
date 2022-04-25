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
// declaration et initialisation des pointeurs

int *pointeur=NULL;        	// meme chose que 0
int variable =10;			// doit etre du meme type que la variable pointee

/*
-----------------------------------------
			PROGRAMME PRINCIPAL
-----------------------------------------
*/
int main()
{

    printf("\tLe but est de comprendre le fonctionnement du pointeur\n\n");

    printf("Les valeurs de variable sont = %d\n\n",variable);

    //  le pointeur recoit une valeur "on dit qu'il dereference"

    pointeur = &variable;  // Le pointeur recoit la valeur de l'adresse de variable

    printf("L'adresse de pointeur est %X et la valeur de *pointeur est : %d \n\n",pointeur, *pointeur);

    *pointeur = 50; // on modifie la valeur de variable en ne passant pas par sa valeur mais par son adresse

    printf("La valeur de variable est %d\n\n",variable);



 return 0;

}

