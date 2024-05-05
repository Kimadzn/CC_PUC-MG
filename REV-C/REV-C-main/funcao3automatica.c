#include <stdio.h>
#include <stdlib.h>

void teste(void){
    int variavel = 2;
    variavel *=2;
    printf ("%i\n", variavel);
}

int main (void){
    teste();
    teste();
    return 0;
}
//Recriada toda vez que chamada variavel local automatica
