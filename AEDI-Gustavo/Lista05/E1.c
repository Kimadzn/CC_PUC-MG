#include <stdio.h>

int isPar(int valor) {
    if (valor % 2 == 0) {
        return 1; // O valor é par
    } else {
        return 0; // O valor é ímpar
    }
}

int main() {
    int numero;
    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    if (isPar(numero)) {
        printf("%d é um numero par.\n", numero);
    } else {
        printf("%d é um numero ímpar.\n", numero);
    }

    return 0;
}
