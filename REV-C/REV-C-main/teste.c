#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int v1, v2, resultado;

    printf("Escreva um valor 01: \n");
    scanf("%d", &v1);    
    printf("Escreva um valor 02: \n");
    scanf("%d", &v2);

    resultado = multiplicacao(v1,v2);

    printf("Resultado e %d\n", resultado);

    apresentacao();



    return 0;
}

void apresentacao(void)
{
    printf("Esse e um teste de funcao\n");
}

int multiplicacao(int N1, int N2)
{
    int resultado;
    resultado = N1 * N2;
    return(resultado);
}