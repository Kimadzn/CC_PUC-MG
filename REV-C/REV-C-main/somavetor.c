#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    double soma, media;
    printf("Quantos numeros serao digitados\n");
    scanf("%d", &N);

    double vet [N];

    for (int i = 0 ; i <N; i++)
    {
       printf("\nDigite um numero:");
       scanf("%lf", &vet[i]); 
    }

    printf("\n VALORES : ");
    for(int i = 0; i < N; i++)
    {
        printf("%.1lf", vet[i]);
    }
    printf("\n");
    soma = 0;
    for ( int i = 0 ; i< N; i++)
    {
        soma = soma + vet[i];
    }
    printf("SOMA = %.2lf\n", soma);
    
    return 0 ;
}