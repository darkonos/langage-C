/* Exercice 9.12
 Concevez un programme pour générer des combinaisons sur trois lettres. L’affichage doit montrer toutes les combinaisons
  de trois lettres entre AAA et ZZZ, chacune sur une ligne distincte.
*/

#include <stdio.h>

int main() 
{
  
int a, b, c;

  for(a='A'; a<='Z'; a++)
  {
    for(b='A'; b<='Z'; b++)
    {
      for(c='A'; c<='Z'; c++)
      {
          printf("%c%c%c \n", a, b, c);
      }
    } 
  }

return 0;
}