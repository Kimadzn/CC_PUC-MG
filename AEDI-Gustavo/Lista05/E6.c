#include <stdio.h>
#include <stdlib.h>

int **multiplicaMatrizes(int **matriz1, int **matriz2, int linhas1, int colunas1, int colunas2) {
    // Verifique se a multiplicação é possível
    if (colunas1 != linhas2) {
        return NULL; // Não é possível multiplicar as matrizes
    }

    // Aloque dinamicamente memória para a matriz resultante
    int **resultado = (int **)malloc(linhas1 * sizeof(int *));
    if (resultado == NULL) {
        perror("Erro na alocação de memória");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < linhas1; i++) {
        resultado[i] = (int *)malloc(colunas2 * sizeof(int));
        if (resultado[i] == NULL) {
            perror("Erro na alocação de memória");
            exit(EXIT_FAILURE);
        }
    }

    // Calcule o produto das matrizes
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < colunas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    return resultado;
}

int main() {
    int linhas1, colunas1, linhas2, colunas2;

    printf("Digite o número de linhas e colunas da primeira matriz: ");
    scanf("%d %d", &linhas1, &colunas1);

    printf("Digite o número de linhas e colunas da segunda matriz: ");
    scanf("%d %d", &linhas2, &colunas2);

    // Verifique se é possível multiplicar as matrizes
    if (colunas1 != linhas2) {
        printf("Não é possível multiplicar as matrizes. As dimensões não são compatíveis.\n");
        return 0;
    }

    // Aloque memória e leia as matrizes
    int **matriz1 = (int **)malloc(linhas1 * sizeof(int *));
    for (int i = 0; i < linhas1; i++) {
        matriz1[i] = (int *)malloc(colunas1 * sizeof(int));
        for (int j = 0; j < colunas1; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    int **matriz2 = (int **)malloc(linhas2 * sizeof(int *));
    for (int i = 0; i < linhas2; i++) {
        matriz2[i] = (int *)malloc(colunas2 * sizeof(int));
        for (int j = 0; j < colunas2; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Calcule o produto das matrizes
    int **resultado = multiplicaMatrizes(matriz1, matriz2, linhas1, colunas1, colunas2);

    if (resultado == NULL) {
        printf("Não é possível multiplicar as matrizes. As dimensões não são compatíveis.\n");
        return 0;
    }

    printf("Resultado do produto das matrizes:\n");
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    // Libere a memória alocada dinamicamente
    for (int i = 0; i < linhas1; i++) {
        free(matriz1[i]);
    }
    free(matriz1);

    for (int i = 0; i < linhas2; i++) {
        free(matriz2[i]);
    }
    free(matriz2);

    for (int i = 0; i < linhas1; i++) {
        free(resultado[i]);
    }
    free(resultado);

    return 0;
}
