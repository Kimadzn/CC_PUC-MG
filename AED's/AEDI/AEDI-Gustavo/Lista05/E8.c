#include <stdio.h>

void imprimirTrianguloDecrescente(int n) {
    if (n > 0) {
        for (int i = 0; i < n; i++) {
            printf("*");
        }
        printf("\n");
        imprimirTrianguloDecrescente(n - 1);  // Chamada recursiva com n-1
    }
}

int main() {
    int altura;

    printf("Digite a altura do triângulo: ");
    scanf("%d", &altura);

    imprimirTrianguloDecrescente(altura);

    return 0;
}
