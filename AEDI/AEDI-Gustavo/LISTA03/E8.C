#include <stdio.h>

int main() {
    int numero;
    unsigned long long fatorial = 1; 

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    if (numero < 0) {
        printf("O fatorial de um número negativo nao e definido.\n");
    } else {
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }

        printf("O fatorial de %d e %llu\n", numero, fatorial);
    }

    return 0;
}
