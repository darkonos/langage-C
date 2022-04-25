#include <stdio.h>
#include <stdlib.h>

#define TAILLE 10

int main() 
{

//  float somme = 0.0;
//  int i = 0;
//  int tab[TAILLE]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//  for(int i=0; i < tab[10-1]; i++)
//  {
//      somme += tab[i];
    
//  }
//    printf("%.1f \n", somme / TAILLE );

int a;
int *ptr = NULL;

ptr = &a;

  printf("valeur de a : %p et valeur de pointeur de a : %p", a, *ptr);

return 0;
}