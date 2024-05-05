#include <stdio.h>

int main()
{
    int N;
    printf("Quantos numeros voce vai digitar?\n");
    scanf("%d", &N);

    int vet[N];

    for(int i = 0; i<N; i++)
    {
        printf("Digite um numero : \n");
        scanf("%d", &vet[i]);
    }

    printf("\nNumeros Negativos");
    for(int i = 0; i<N; i++)
    {
        if(vet[i]< 0){
            printf("\n%d", vet[i]);
        }
    }


return 0 ;
}