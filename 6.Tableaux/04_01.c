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

int tableau[4];                             // declaration d'un tableau dont l'initialisation se fera dans le main
int tableau1_de_int[3];                     // declaration d'un tableau non initialise contenant 3 elements de type int
char tableau1_de_char[5]={0,1,2,3,4};       // declaration d'un tableau initialise contenant 5 elements de type char
int tableau2_de_int[5]={10,20};             // declaration d'un tableau initialise partiellement contenant 5 elements de type int

// declaration d'un tableau ne contenant que des elements de type char sous forme ASCii
char tableau2_de_char[29]={'C','e',' ','t','a','b','l','e','a','u',' ','e','s','t',' ','a','v','e','c',' ','d','i','m','e','n','s','i','o','n'};

// La dimension est determinee par le compilateur en fonction du contenu
char tableau_sans_dimension[]={"Le langage C est formidable!"};

// La dimension est determinee par le compilateur en fonction du contenu
//char tableau_pseudo[];

// declaration d'un tableau initialise contenant 10 elements de type int
int tableau3_de_int[10]={10,20,30,40,50,60,70,80,90,100};

// declaration des variables qui servent aux index des structures de controles
// afin de parcourir le contenu des tableaux
int index_while=0;
int index_for=0;

/*
-----------------------------------------
			PROGRAMME PRINCIPAL
-----------------------------------------
*/
int main()
{
    // initialisation tres laborieuse d'un tableau de 4 elements de type int qui doit se faire dans le main
//  tableau[0] = 10;
//  tableau[1] = 23;
//  tableau[2] = 505;
//  tableau[3] = 8;
// 
// 
//  printf("Pour afficher l'element d'un tableau : nom_tableau[numero_de_element]\n\n");
// 
//  printf("Le contenu de la case 0 de tableau1_de_char est %d\n",tableau1_de_char[0]);
//  printf("Le contenu de la case 5 de tableau1_de_char est %d\n",tableau1_de_char[4]);
//  printf("Le contenu de la case 0 de tableau2_de_int est %d\n",tableau2_de_int[0]);
//  printf("Le contenu de la case 1 de tableau2_de_int est %d\n",tableau2_de_int[1]);
//  printf("Le contenu de la case 2 de tableau2_de_int est %d\n",tableau2_de_int[2]);
//  printf("Le contenu de la case 3 de tableau2_de_int est %d\n\n",tableau2_de_int[3]);
// 
//  printf("Le compilateur met des 0 dans les elements non initialises\n\n");

/*****************La taille du tableau n'est pas connue***************/

//  printf("\t La taille du tableau est inconnue !\n\n");
// 
//  while (tableau_sans_dimension[index_while]!=0)
//   {
//       printf("%c",tableau_sans_dimension[index_while]);
//       index_while++;
//   }
//  printf("\n\n");

/*****************La taille du tableau est connue*****************/

//  printf("\t La taille du tableau est connue !\n\n");

//  for (index_for=0;index_for<10;index_for++)
//   {
//    printf("Le contenu de tableau3_de_int[%d] vaut : %d\n",index_for,tableau3_de_int[index_for]);
//   }
//  printf("\n\n");

/*****************Tableau dynamique utilisation d'une chaine de caracteres *****************/


//  printf("Bienvenue sur ce forum. Quel est votre pseudo ?\n");
//  scanf("%s", tableau_pseudo);
//  printf("Bonjour %s, votre session est ouverte !\n\n", tableau_pseudo);

/*****************Connaitre la taille d'un tableau avec l'operateur sizeof *****************/

    // printf("----------------------------------------------------\n");
    // printf("La taille de 'tableau1_de_int' est de %d octets\n\n", sizeof(tableau1_de_int));
    // printf("La taille de 'tableau2_de_char' est de %d octets\n\n", sizeof(tableau2_de_char));
    // ne peut pas marcher car le nom du pseudo n'est pas connu au moment de la compilation
   // printf("La taille de 'tableau_sans_dimension' est de %d octets\n\n", sizeof(tableau_pseudo));

   return 0;
}

