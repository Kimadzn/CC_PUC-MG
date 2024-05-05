#include <stdio.h>

int main()
{
    int vet [5] = {10, 20, 30, 40, 50};
    int i;

    for( i = 0; i<5; i++)
    {
        printf("Conteudo da %d posicao: %d \n", i+1,vet[i]);
    }
    
}