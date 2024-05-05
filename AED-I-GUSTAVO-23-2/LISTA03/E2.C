#include <stdio.h>
#include <math.h>

int main(){

int n, soma = 0;
printf("Digite o numero de N a serem digitados ");
scanf("%d", &n);

for (int  i = 0; i < n; i++)
{
    soma = 1/(pow(2,i));
}

    printf("A soma e %d", soma);    
    return 0;
}