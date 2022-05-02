/* Exercice 9.16 
   Calcul du début d'une suite de Fibonacci 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int fibo, nacci, taille;

fibo = 0;
nacci = 1;

 printf("What\'s length of Fibonnaci ? :  ");
 scanf("%d", &taille);
 printf("The suite Fibonacci of %d is : \n", taille);
    do
    {
      printf("%d ", fibo);
      fibo = fibo + nacci;
      printf("%d ", nacci);
      nacci = fibo + nacci;

    } while (nacci <= taille);

      putchar('\n');

return 0;
}