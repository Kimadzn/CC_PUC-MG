#include <stdio.h>

void imprimirTriangulo(int n) {
    if (n > 0) {
        imprimirTriangulo(n - 1);  // Chamada recursiva com n-1
        for (int i = 0; i < n; i++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int altura;

    printf("Digite a altura do triângulo: ");
    scanf("%d", &altura);

    imprimirTriangulo(altura);

    return 0;
}
