#include <stdio.h>

// Função para calcular o determinante de uma matriz quadrada de ordem n
double calcularDeterminante(int n, double matriz[][n]) {
    if (n == 1) {
        return matriz[0][0];
    } else if (n == 2) {
        return matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
    } else {
        double determinante = 0;
        for (int i = 0; i < n; i++) {
            double submatriz[n - 1][n - 1];
            for (int j = 1; j < n; j++) {
                int k = 0;
                for (int l = 0; l < n; l++) {
                    if (l != i) {
                        submatriz[j - 1][k++] = matriz[j][l];
                    }
                }
            }
            determinante += matriz[0][i] * calcularDeterminante(n - 1, submatriz) * (i % 2 == 0 ? 1 : -1);
        }
        return determinante;
    }
}

int main() {
    int n;

    printf("Digite a dimensao da matriz quadrada (n): ");
    scanf("%d", &n);

    double matriz[n][n];

    printf("Digite os elementos da matriz %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    printf("Determinante da matriz: %.2lf\n", calcularDeterminante(n, matriz));

    printf("Diagonal principal da matriz:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2lf ", matriz[i][i]);
    }
    printf("\n");

    return 0;
}
