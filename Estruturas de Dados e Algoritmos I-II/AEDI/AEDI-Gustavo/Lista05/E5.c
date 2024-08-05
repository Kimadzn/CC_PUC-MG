#include <stdio.h>
#include <stdlib.h>

int *somaVetores(const int vetor1[], const int vetor2[], int tamanho) {
    int *resultado = (int *)malloc(tamanho * sizeof(int));

    if (resultado == NULL) {
        perror("Erro na alocação de memória");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < tamanho; i++) {
        resultado[i] = vetor1[i] + vetor2[i];
    }

    return resultado;
}

int main() {
    int tamanho;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int vetor1[tamanho];
    int vetor2[tamanho];

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor2[i]);
    }

    int *resultado = somaVetores(vetor1, vetor2, tamanho);

    printf("A soma dos dois vetores resulta em:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", resultado[i]);
    }

    free(resultado); // Libera a memória alocada dinamicamente

    return 0;
}
