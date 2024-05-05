#include <stdio.h>

// Função recursiva para calcular o n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Função recursiva para imprimir a sequência de Fibonacci até o n-ésimo termo
void printFibonacci(int n) {
    if (n <= 0)
        return;

    printFibonacci(n - 1);
    printf("%d ", fibonacci(n - 1));
}

int main() {
    int n;
    
    printf("Digite o número de termos da sequência de Fibonacci que deseja imprimir: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O número de termos deve ser não negativo.\n");
    } else {
        printf("Sequência de Fibonacci até o %d-ésimo termo: ", n);
        printFibonacci(n);
        printf("\n");
    }

    return 0;
}
