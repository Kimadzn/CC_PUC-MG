#include <stdio.h>
#include <stdlib.h>


float calcularMedia(int numeros[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    return (float)soma / tamanho;
}


float calcularMediana(int numeros[], int tamanho) {
    if (tamanho % 2 == 0) {
        int meio1 = numeros[tamanho / 2 - 1];
        int meio2 = numeros[tamanho / 2];
        return (float)(meio1 + meio2) / 2;
    } else {
        return numeros[tamanho / 2];
    }
}


int calcularModa(int numeros[], int tamanho) {
    int moda = numeros[0];
    int contagemModa = 1;
    int atual = numeros[0];
    int contagemAtual = 1;

    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] == atual) {
            contagemAtual++;
        } else {
            atual = numeros[i];
            contagemAtual = 1;
        }

        if (contagemAtual > contagemModa) {
            moda = atual;
            contagemModa = contagemAtual;
        }
    }

    return moda;
}


float calcularDesvioPadrao(int numeros[], int tamanho, float media) {
    float somaQuadrados = 0;
    for (int i = 0; i < tamanho; i++) {
        somaQuadrados += (numeros[i] - media) * (numeros[i] - media);
    }
    return sqrt(somaQuadrados / tamanho);
}

int main() {
    int numeros[100]; 
    int tamanho = 0;
    int num;

    
    printf("Digite os numeros naturais (0 para encerrar):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        numeros[tamanho] = num;
        tamanho++;
    }

    if (tamanho == 0) {
        printf("Nenhum numero foi inserido.\n");
    } else {
        float media = calcularMedia(numeros, tamanho);
        float mediana = calcularMediana(numeros, tamanho);
        int moda = calcularModa(numeros, tamanho);
        float desvioPadrao = calcularDesvioPadrao(numeros, tamanho, media);

        printf("Media: %.2f\n", media);
        printf("Mediana: %.2f\n", mediana);
        printf("Moda: %d\n", moda);
        printf("Desvio Padrao: %.2f\n", desvioPadrao);
    }

    return 0;
}
