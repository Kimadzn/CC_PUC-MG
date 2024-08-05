#include <stdio.h>

int main() {
    int m, n, p, q;

    printf("Digite as dimensoes da matriz A (m x n): ");
    scanf("%d %d", &m, &n);

    printf("Digite as dimensoes da matriz B (p x q): ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Nao e possivel multiplicar as matrizes. O numero de colunas de A deve ser igual ao numero de linhas de B.\n");
        return 1;
    }

    double matrizA[m][n];
    double matrizB[p][q];
    double resultado[m][q];

    printf("Digite os elementos da matriz A %dx%d:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &matrizA[i][j]);
        }
    }

    printf("Digite os elementos da matriz B %dx%d:\n", p, q);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%lf", &matrizB[i][j]);
        }
    }

    // Multiplicação das matrizes
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < n; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    // Imprimir o resultado
    printf("Resultado da multiplicacao A x B %dx%d:\n", m, q);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%.2lf ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
