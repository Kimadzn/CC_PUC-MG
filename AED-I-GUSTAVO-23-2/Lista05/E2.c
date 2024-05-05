#include <stdio.h>

void fibonacci(int n) {
    int primeiro = 0, segundo = 1;
    int proximo;

    printf("Série de Fibonacci com %d termos: ", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            proximo = i;
        } else {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }

        printf("%d", proximo);

        if (i < n - 1) {
            printf(", ");
        }
    }

    printf("\n");
}

int main() {
    int termos;

    printf("Digite a quantidade de termos da série de Fibonacci: ");
    scanf("%d", &termos);

    fibonacci(termos);

    return 0;
}
