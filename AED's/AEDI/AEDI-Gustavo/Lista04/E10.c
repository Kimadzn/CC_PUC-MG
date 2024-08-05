#include <stdio.h>


int coeficienteBinomial(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return coeficienteBinomial(n - 1, k - 1) + coeficienteBinomial(n - 1, k);
    }
}

int main() {
    int n;

    printf("Digite o numero de linhas do Triangulo de Pascal: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um numero natural.\n");
        return 1;
    }

    for (int linha = 0; linha < n; linha++) {
        for (int espaco = 0; espaco < n - linha - 1; espaco++) {
            printf(" ");
        }
        for (int coluna = 0; coluna <= linha; coluna++) {
            printf("%d ", coeficienteBinomial(linha, coluna));
        }
        printf("\n");
    }

    return 0;
}
