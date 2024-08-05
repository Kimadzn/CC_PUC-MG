#include <stdio.h>

int main() {
    int a, b, c;


    printf("Digite o primeiro valor (a): ");
    scanf("%d", &a);
    printf("Digite o segundo valor (b): ");
    scanf("%d", &b);
    printf("Digite o terceiro valor (c): ");
    scanf("%d", &c);


    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }


    printf("Valores em ordem crescente: %d, %d, %d\n", a, b, c);

    return 0;
}
