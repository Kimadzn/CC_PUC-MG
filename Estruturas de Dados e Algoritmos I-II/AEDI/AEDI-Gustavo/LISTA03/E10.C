#include <stdio.h>
#include <stdbool.h>


int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool saoCoprimos(int num1, int num2) {
    
    return mdc(num1, num2) == 1;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    if (saoCoprimos(num1, num2)) {
        printf("%d e %d sao numeros coprimos.\n", num1, num2);
    } else {
        printf("%d e %d nao sao numeros coprimos.\n", num1, num2);
    }

    return 0;
}
