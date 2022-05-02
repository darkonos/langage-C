#include <stdio.h>

int main()
{

int cmpt = 0;

    for(cmpt=0; cmpt<=10; cmpt++)
    {
        printf("%d ", cmpt);
        if(cmpt == 8)
        {
            printf("On a le %d  mais on continue !\n", cmpt);
            continue;
            
        }
           
    }
     putchar('\n');
     printf(" Sortie du prog  car compteur vaut %d \n", cmpt);

return 0;
}