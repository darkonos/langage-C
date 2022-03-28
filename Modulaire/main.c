#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

/* gcc -c -o main main.c pour la compilation */


int main() {

    switch (menu())
    {
    case 1:
    printf("Welcome UBUNTU ! \n");
        break;
    case 2:
    printf("Welcome DEBIAN ! \n");
        break;
    case 3:
    printf("Welcome FEDORA ! \n");
        break;
    case 4:
    printf("Welcome CENTOS ! \n");
        break;
    
    default:
    printf("ERREUR ! RECOMMENCE ! \n");
    system ("clear");
        break;
    }

return 0;

}