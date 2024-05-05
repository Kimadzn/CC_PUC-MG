#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    printf("Quantos pessoas serao digitados\n");
    scanf("%d", &N);

    char nomes[N][50];
    int idades[N];
    double alturas[N];
    double soma, media;


    for (int i = 0 ; i <N; i++)
    {
       printf("\nDigite dados da %d pessoa\n", i+1);
       printf("Nome : \n");
       fseek(stdin, 0, SEEK_END);
       gets(nomes[i]); 
       printf("Idade: \n");
       scanf("%d", &idades[i]);
       printf("Altura: \n");
       scanf("%lf", &alturas[i]);
    }

    soma = 0;
    for (int i = 0; i <N; i++)
    {
        soma = soma + alturas[i];
    }
    media = soma/N;
    printf("Altura media:  %.2lf\n", media);
    

    
    return 0 ;
}