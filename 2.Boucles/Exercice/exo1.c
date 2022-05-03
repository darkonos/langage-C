/* Soit le petit programme suivant :

#include <stdio.h>
main()
(
int i, n, som ;
som = 0 ;

    for (i=0 ; i<4 ; i++)
    { 
        printf ("donnez un entier ")
        scanf ("%d", &n);
        som += n;
    }

        printf ("Somme : %d\n", som) ;

return 0;
}

Écrire un programme réalisant exactement la même chose, en employant, à la place de
l'instruction for :
•une instruction while,
•une instruction do.. . while. */

/* Résolu avec while 
#include <stdio.h>

int main()
{
int i, n, som ;
som = 0 ;
i = 0;

    while(i<4)
    {
        printf ("donnez un entier : ");
        scanf("%d", &n);
        som += n;
        i++;
    }

        printf("Somme : %d \n", som);

return 0;
} */

/* Résolu avec do while 

#include <stdio.h>

int main()
{

int i, n, som ;
som = 0 ;
i = 0;

    do
    {  
        printf ("donnez un entier : ");
        scanf("%d", &n);
        som += n;
        i++;

    }while(i < 4);

        printf("Somme : %d \n", som);

return 0;
} */

