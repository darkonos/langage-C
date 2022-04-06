/*  les directives du préprocesseur 

- #include ne fait rien d'autre qu'insérer un fichier dans un autre. */

/* 1. #Define
 ------------

 Permet de définir une constante de préprocesseur (associer une valeur à un mot)

 - Ne prend pas de place en mémoire
 - le remplacement se fait dans tout le fichier dans lequel se trouve le #define
 - s'applique à toutes les fonctions du fichier */

 /* 2. Utilisation */
  -------------------

 //Définissez la taille des tableaux 

#define TAILLE_MAX      1000

int main()
{
    char chaine1[TAILLE_MAX], chaine2[TAILLE_MAX];
    
// Faire des calculs dans les #define

#define LARGEUR_FENETRE  800
#define HAUTEUR_FENETRE  600
#define NOMBRE_PIXELS    (LARGEUR_FENETRE * HAUTEUR_FENETRE)

// Constantes prédéfinies par le processeur (Ces constantes peuvent être utiles pour gérer des erreurs)

/* __LINE__ donne le numéro de la ligne actuelle.

__FILE__ donne le nom du fichier actuel.

__DATE__ donne la date de la compilation.

__TIME__ donne l'heure de la compilation. */

printf("Erreur a la ligne %d du fichier %s\n", __LINE__, __FILE__);
printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);

/* 3. LES MACROS
----------------

#define permet aussi de remplacer un mot aussi par… un code source tout entier. */

//Macro simple, sans paramètres

#define COUCOU() printf("Coucou"); 

int main(int argc, char *argv[])
{
    COUCOU()  //Ne prend pas de ; car c'est une ligne pour le préprocesseur

    return 0;
}

// Il est possible de mettre plusieurs lignes de code à la fois.(Il suffit de placer un\  avant chaque nouvelle ligne)

#define RACONTER_SA_VIE()   printf("Coucou, je m'appelle Brice\n"); \
                            printf("J'habite a Nice\n"); \
                            printf("J'aime la glisse\n");

int main(int argc, char *argv[])
{
    RACONTER_SA_VIE()   //Ne prend pas de ; car c'est une ligne pour le préprocesseur

    return 0;
}


// Macro qui prend des paramètres

#define MAJEUR(age) if (age >= 18) \
                    printf("Vous etes majeur\n");

int main(int argc, char *argv[])
{
    MAJEUR(22)

    return 0;
}

// Réalisez des conditions en langage préprocesseur

#if condition
    /* Code source à compiler si la condition est vraie */
#elif condition2
    /* Sinon si la condition 2 est vraie compiler ce code source */
#endif

// #define d'une constante sans préciser de valeur

/* C'est comme ça que font certains programmes multi-plateformes pour s'adapter à l'OS 
Si vous êtes sous Windows, vous écrivez un #define WINDOWS  en haut, puis vous compilez.
il faut ensuite recompiler le programme pour chaque OS */

#define WINDOWS

#ifdef WINDOWS
    /* Code source pour Windows */
#endif

#ifdef LINUX
    /* Code source pour Linux */
#endif

#ifdef MAC
    /* Code source pour Mac */
#endif






