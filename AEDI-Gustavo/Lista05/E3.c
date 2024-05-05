#include <stdio.h>

double calcularSerie(int n) {
    double resultado = 0.0;

    for (int i = 1; i <= n; i++) {
        resultado += 4.0 / (2.0 * i - 1);
    }

    return resultado;
}

int main() {
    int termos;
    printf("Digite a quantidade de termos da série: ");
    scanf("%d", &termos);

    double resultado = calcularSerie(termos);

    printf("O resultado da série é aproximadamente %.6f\n", resultado);

    return 0;
}
