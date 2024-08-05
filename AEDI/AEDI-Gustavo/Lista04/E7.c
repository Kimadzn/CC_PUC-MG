#include <stdio.h>

int ehPrimo(int numero) {
    if (numero <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int n;

    printf("Digite um numero natural n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um numero natural maior que zero.\n");
        return 1;
    }

    printf("Os primeiros %d numeros primos sao:\n", n);

    int numero = 2; 
    int encontrados = 0; 

    while (encontrados < n) {
        if (ehPrimo(numero)) {
            printf("%d ", numero);
            encontrados++;
        }
        numero++;
    }

    printf("\n");

    return 0;
}
