#include <stdio.h>
#include <stdlib.h>


/* PROTOTYPE DE FONCTION */

int volumn(int a, int b, int c);

/* DECLARATION DE STRUCTURE */

struct Calcul {

    char height[10];
    char width[10];
    char depth[10];
}h, l, d;


int main(){    


    printf("Please enter height : ");
    fgets(h.height, 10, stdin);
    
    printf("Please enter width : ");
    fgets(l.width, 10, stdin);
    
    printf("Please enter depth : ");
    fgets(d.depth, 10, stdin);

    /* Fonction atoi
Cette fonction permet de transformer une chaîne de caractères, 
représentant une valeur entière, en une valeur numérique de type int */
    int valheight = atoi(h.height);
    int valwidth = atoi(l.width);
    int valdepth = atoi(d.depth);

    printf("\nThe volumn is %i\n", volumn(valheight, valwidth, valdepth));

    return 0;
}

/* FONCTION */

int volumn(int a, int b, int c)
{
    return a*b*c;
}