#include <stdio.h>
#include <stdlib.h>


int maiorElemento(int vetor[], int tamanho)
{
    int maior = vetor[0];
    for (int i = 0; i < tamanho; i++)
    {
        if(vetor[i]> maior)
        {
            maior = vetor[i];
        }
    
    }
    return maior;
}

int main (void)
{
    int tam;
    printf("Digite a quantidade de nums \n");
    scanf("%d" &tam);
    int numero[tam];
    for (int i = 0; i <tam; i++)
    {
        printf("Digie um numero \n");
        scanf(%d, &numero[i]);

    }

    int maior = maiorElemento(tam, numero);
    printf("o maior numer %d \n" &maior);
    return 0 ;
}