#include <stdio.h>

int main()
{
int i ;

    for ( i=l ; i<=10 ; i++)
    { 
        printf ("début tour %d\n", i) ;
        printf ("bonjour\n");

            if ( i==3 ) 
                break ;
            printf ("fin tour %d\n", i) ;
    }

        printf ("après la boucle") ;

return 0;
}