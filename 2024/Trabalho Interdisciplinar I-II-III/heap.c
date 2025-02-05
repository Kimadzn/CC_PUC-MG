#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100000

// Função auxiliar para fazer a contagem de inversões usando o merge sort
int merge(int *arr, int *temp, int left, int mid, int right) {
    int i = left, j = mid, k = left;
    int inv_count = 0;

    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count += (mid - i); // Inversão encontrada
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

// Função auxiliar recursiva para o merge sort e contagem de inversões
int mergeSort(int *arr, int *temp, int left, int right) {
    int mid, inv_count = 0;
    if (right > left) {
        mid = (right + left) / 2;

        inv_count += mergeSort(arr, temp, left, mid);
        inv_count += mergeSort(arr, temp, mid + 1, right);

        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

// Função principal que calcula o número mínimo de ultrapassagens
int countInversions(int *arr, int n) {
    int *temp = (int *)malloc(sizeof(int) * n);
    return mergeSort(arr, temp, 0, n - 1);
}

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        int grid_start[MAX], grid_end[MAX], positions[MAX];
        
        // Lendo o grid de largada
        for (int i = 0; i < n; i++) {
            scanf("%d", &grid_start[i]);
        }

        // Lendo o grid de chegada
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            positions[x] = i; // Guardar a posição final de cada competidor
        }

        // Transformar o grid de largada nas posições finais
        for (int i = 0; i < n; i++) {
            grid_end[i] = positions[grid_start[i]];
        }

        // Contar o número de inversões
        int ultrapassagens = countInversions(grid_end, n);

        // Imprimir o número de ultrapassagens mínimas
        printf("%d\n", ultrapassagens);
    }

    return 0;
}
