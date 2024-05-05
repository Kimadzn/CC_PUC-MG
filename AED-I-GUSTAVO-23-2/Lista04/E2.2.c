#include <stdio.h>
#include <stdlib.h>


int main (void){
    float v1[10];
    int i = 0;
    int num = 0; 
    int count;

    for ( i = 0; i < 10; i++)
    {
        printf("Escreva o valor de V%d\n", i+1);
        scanf("%f", &v1[i]);
    }
    
    
    printf("Escreva um numero para verificar a ocorrencia\n", num);
    scanf("%f", &num);
    for (int i = 0; i < 10; i++)
    {
        if (v1[i] == num)
        {
            count++;
            printf("O numero aparece na posicao %d do vetor\n", i+1);

        }
        
    }

    printf("O numero de vezes que o numero verificado aparece e %d\n", count);


    system("pause");
    return 0;
}