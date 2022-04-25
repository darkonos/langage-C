/* Les tableaux sont une suite de variables de même type, stockées côte à côte en mémoire. 
Un tableau de N éléments commence par le N° 0 et se termine par le numéro N -1 (car le 0 est considéré comme une valeur) */

/* 1.Définir un tableau */

int tab[4];

tab[0] = 12;
tab[1] = 34;
tab[2] = 45;
tab[3] = 67;

//En écrivant juste tab, on obtient un pointeur sur la première case du tableau. On voit l'adresse où se trouve tableau.
 printf("%d", tab);
//On peut utiliser le symbole * pour connaître la première valeur
 printf("%d", *tab);
//Il est aussi possible d'obtenir la valeur de la seconde case 
 printf("%d", *(tab + 1));
//Si on indique l'indice de la case du tableau entre crochets, on obtient la valeur de la case
 printf("%d", tab[2]);

/* 2.Tableau à taille dynamique */

/* Le langage C existe en plusieurs versions.
Une version récente, appelée le C99, autorise la création de tableaux à taille dynamique, 
c'est-à-dire de tableaux dont la taille est définie par une variable. Or cela n'est pas forcément reconnu par tous les compilateurs */

/* 3.Parcourir un tableau */

/* Si on connait la taille du tableau, on utilise la boucle for sinon on utilise la boucle while */


/* 4.Initialisez un tableau Plusieurs façons de faire */

//Méthode 1 :

int main(int argc, char *argv[])
{
    int tableau[4], i = 0;

    // Initialisation du tableau
    for (i = 0 ; i < 4 ; i++)
    {
        tableau[i] = 0;
    }

    // Affichage de ses valeurs pour vérifier
    for (i = 0 ; i < 4 ; i++)
    {
        printf("%d\n", tableau[i]);
    }

    return 0;
}

//Méthode 2:

int main(int argc, char *argv[])
{
      // Initialisation du tableau
    int tableau[4] = {0, 0, 0, 0}, i = 0;

    for (i = 0 ; i < 4 ; i++)
    {
        printf("%d\n", tableau[i]);
    }

    return 0;
}

//Méthode 3: 

/* vous pouvez aussi définir les valeurs des premières cases du tableau, 
toutes celles que vous n'aurez pas renseignées seront automatiquement mises à 0. */

int tableau[4] = {10, 23}; // Valeurs insérées : 10, 23, 0, 0

//initialiser tout le tableau à 0
int tableau[4] = {0}; // Toutes les cases du tableau seront initialisées à 0

//Méthode 4: 

/* Consiste à écrire le nom de la variable avec les crochets vides */
int tableau[] = {12, 19, 18, 2}; 

//5.Écrivez une fonction pour afficher le contenu d'un tableau

/* Il faut envoyer deux informations à la fonction :
  - l'adresse du tableau
  - la taille du tableau */

  // Prototype de la fonction d'affichage
void affiche(int *tableau, int tailleTableau);
 
int main(int argc, char *argv[])
{
    int tableau[4] = {10, 15, 3};
 
    // On envoi l'adresse et la taille du tableau
    affiche(tableau, 4);
 
    return 0;
}
 
void affiche(int *tableau, int tailleTableau)
{
    int i;
 
    for (i = 0 ; i < tailleTableau ; i++)
    {
        printf("%d\n", tableau[i]);
    }
}

/* Il existe une autre façon d'indiquer que la fonction reçoit un tableau en mettant des [] */

void affiche(int tableau[], int tailleTableau)

/* La présence des crochets permet au programmeur de bien voir que c'est un tableau que la fonction prend, 
et non un simple pointeur. Cela permet d'éviter des confusions.*/

