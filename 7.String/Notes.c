/* Une chaine de caractères est un tableau de char 

- char permet de stocker des nombres allant de -128 à 127 
- unsigned char permet de stocker les nombres de 0 à 255
- L'ordinateur utilise la table ASCII pour convertir les lettres en nombres et inversement
- On utilise le type char pour stocker UNE lettre
- Une chaîne de caractère doit impérativement contenir le caractère spécial \0 à la fin de la chaîne  pour que
 l'ordinateur sache quand s'arrête la chaîne

*/

/* 1. Initialiser une chaîne */

char chaine[] = "Hello";

printf("%s", chaine);


/* 2. Récupérez une chaîne via un scanf */

char prenom[100]; //Bien préciser le nombre de caractères

    printf("votre nom : ");
    scanf("%s", prenom);

/* 3. Manipulez des chaînes à l'aide de fonctions */

//Il faut inclure string.h pour pouvoir les utiliser.

/* 
strlen pour calculer la longueur d'une chaîne.

strcpy pour copier une chaîne dans une autre.

strcat pour concaténer 2 chaînes.

strcmp pour comparer 2 chaînes.

strchr pour rechercher un caractère.

strpbrk pour rechercher le premier caractère de la liste.

strstr pour rechercher une chaîne dans une autre.

sprintf pour écrire dans une chaîne.
*/