#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false; // 0 e 1 não são primos
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false; // Encontrou um divisor, não é primo
        }
    }

    return true; // Não encontrou divisores, é primo
}

int main() {
    int numero;

    printf("Digite um numero natural: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("%d e um numero primo.\n", numero);
    } else {
        printf("%d nao e um numero primo.\n", numero);
    }

    return 0;
}
