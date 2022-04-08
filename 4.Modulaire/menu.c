/* LES FONCTIONS */

#include "menu.h"

int menu()
{

    int choix = 0;

    while(choix < 1 || choix > 4) {

        printf("===DISTRIBUTION=== \n");
        printf("1. Ubuntu \n");
        printf("2. Debian \n");
        printf("3. Fedora \n");
        printf("4. CentOS \n");

        printf("You Choice : ");
        scanf("%d", &choix);
        system("clear");
    }
    
    return choix;
}