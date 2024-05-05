#include <stdio.h>
#include <stdlib.h>

int main (void){
    int x;
    x = 10;
    int y = 20;

    int *ponteiro; // Cria o ponteiro
    ponteiro = &x; //apronta no endereco de memoria var X

    *ponteiro = y;//Altera o valor de Y para o valor de X

//& Endereço de memoria
//* Valor ponteiro


    printf("Valor de X :%i\n", x);
    printf("Valor do Local Onde o Ponteiro Aponta Endereco de memoria (x):%i\n", *ponteiro);
    printf("Endereço de Memoria X :%i\n", ponteiro);
    printf("Endereço de memoria do Ponteiro : %i\n", &ponteiro);
    printf("O valor de Y e%i\n", y);

    getchar();
    return 0;
}