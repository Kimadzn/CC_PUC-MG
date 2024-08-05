#include <stdio.h>
#include <stdlib.h>

//Função inciada fora da main
void imprimaMensagem(void)
{
    printf("Mensagem teste imprimir\n");

}


int main ()
{
    void imprimaMensagem(void); // Declaração da função
    imprimaMensagem(); //Chamado de função
    imprimaMensagem();
    imprimaMensagem();
    return 0;
}

// Caso a funçao seha embaixo declarar a função no codigo