#include <stdio.h>
#include <stdlib.h>


/* PROTOTYPE DE FONCTION */

long volumn(long a, long b, long c);

/* DECLARATION DE STRUCTURE */

struct Calcul {

    char height[20];
    char width[10];
    char depth[10];
}h, l, d;


int main(){    


    printf("Please enter height : ");
    fgets(h.height, 20, stdin);
    
    printf("Please enter width : ");
    fgets(l.width, 10, stdin);
    
    printf("Please enter depth : ");
    fgets(d.depth, 10, stdin);

    /* Fonction atoi
Cette fonction permet de transformer une chaîne de caractères, 
représentant une valeur entière, en une valeur numérique de type int */
    long valheight = atoi(h.height);
    long valwidth = atoi(l.width);
    long valdepth = atoi(d.depth);

    printf("\nThe volumn is %i\n", volumn(valheight, valwidth, valdepth));

    return 0;
}

/* FONCTION */

long volumn(long a, long b, long c)
{
    return a*b*c;
}