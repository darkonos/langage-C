#include <stdio.h>

int main()
{

int cmpt = 0;

    for(cmpt=0; cmpt<=10; cmpt++)
    {
        printf("%d ", cmpt);
        if(cmpt == 8)
           continue;
    }

     printf(" Sortie du prog  car compteur vaut %d \n", cmpt);

return 0;
}