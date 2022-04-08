#include <stdio.h>

float sumTab(float tab[], int taille);

int main() {

float tab[5]={10, 2, 3, 4, 12};


    printf("%.2f \n", sumTab(tab, 5) );

return 0;

}

float sumTab(float tab[], int taille){

 float sum = 0;
 for ( int i = 0; i < taille; i++)
 {
   
    sum +=  tab[i] / taille;

    
 }
     return sum;
}
