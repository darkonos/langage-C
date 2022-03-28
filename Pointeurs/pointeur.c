#include <stdio.h>

void decoupeMinutes(int *heures, int *minutes);

int main() {

int heures = 0, minutes = 0;

    printf("Nombres de minutes : ");
    scanf("%d", &minutes);

    decoupeMinutes(&heures, &minutes);

        printf("%d h %d min \n", heures, minutes);

return 0;

}

void decoupeMinutes(int *heures, int *minutes){ //Récupère les adresses de heures et minutes dans 2 pointeurs *heures et *minutes

 *heures = *minutes / 60;
 *minutes %= 60;

}