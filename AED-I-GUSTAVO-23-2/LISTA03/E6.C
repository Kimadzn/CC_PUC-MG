#include <stdio.h>

int main() {
    int n1, n2, mdc, temp;

    printf("Digite o primeiro numero inteiro: \n");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: \n");
    scanf("%d", &n2);

    int a = n1;
    int b = n2;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    mdc = a;

    printf("O MDC entre %d e %d eh: %d\n", n1, n2, mdc);

    return 0;
}
