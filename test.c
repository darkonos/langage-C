#include <stdio.h>
#include <stdlib.h>

int main() 
{
char ch[20];

  printf("Name : ");
  fgets(ch, sizeof ch, stdin);

    printf("Name is : %s \n", ch);

return 0;
}