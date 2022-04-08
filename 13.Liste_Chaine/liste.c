#include <stdio.h>

/* Création d'une liste chaînée de nombres entiers (OU n'importe quel type de données)*/


//correspond à un élément de la liste et que l'on peut dupliquer autant de fois que nécessaire.
typedef struct Element Element;
struct Element
{
    int nombre;
    Element *suivant; //Le pointeur permet de lier les éléments les uns aux autres
};

//Structure pour contrôler l'ensemble de la liste chaînée
typedef struct Liste Liste;
struct Liste
{
    Element *premier; //pointeur vers le premier élément de la liste
};



int main(int argc, char *argv[])
{
    

return(0);
}

