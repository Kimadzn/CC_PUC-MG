#include <stdio.h>

// Função recursiva para calcular o coeficiente binomial C(n, k)
int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

// Função recursiva para imprimir o triângulo de Pascal com 'n' linhas
void printPascalTriangle(int n) {
    if (n <= 0)
        return;

    printPascalTriangle(n - 1);

    for (int k = 0; k < n; k++) {
        printf("%d ", binomialCoefficient(n - 1, k));
    }

    printf("\n");
}

int main() {
    int n;

    printf("Digite o número de linhas para o Triângulo de Pascal: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O número de linhas deve ser um número natural.\n");
    } else {
        printf("Triângulo de Pascal com %d linhas:\n", n);
        printPascalTriangle(n);
    }

    return 0;
}
