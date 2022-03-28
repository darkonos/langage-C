#include <stdio.h>

int main() {

int i = 0;
char tab[] = {"Hello world ! "};

    while(tab[i] != 0) {
        printf("%c", tab[i]);
        i++;
    }

return 0;

}