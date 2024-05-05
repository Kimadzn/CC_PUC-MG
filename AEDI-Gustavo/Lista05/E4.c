#include <stdio.h>

void somarDoisVetores(const int vetor1[], const int vetor2[], int resultado[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = vetor1[i] + vetor2[i];
    }
}

int main() {
    int tamanho;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int vetor1[tamanho];
    int vetor2[tamanho];
    int resultado[tamanho];

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor2[i]);
    }

    somarDoisVetores(vetor1, vetor2, resultado, tamanho);

    printf("A soma dos dois vetores resulta em:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", resultado[i]);
    }

    return 0;
}
