#include <stdio.h>

int main() {
    int n, soma = 0, numDigitados = 0;
    float media;

    printf("Digite os numeros a serem contados (digite 0 para encerrar):\n");

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        soma += n;
        numDigitados++;
    }

    if (numDigitados == 0) {
        printf("Nenhum numero foi digitado. Encerrando o programa...\n");
    } else {
        media = (float)soma / numDigitados;
        printf("A media dos numeros digitados e: %.2f\n", media);
    }

    return 0;
}
