#include <stdio.h>

int main() {
    int n1, n2, maior;

    printf("Digite o primeiro numero inteiro: \n");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: \n");
    scanf("%d", &n2);

    maior = (n1 > n2) ? n1 : n2;  

    while (1) {
        if (maior % n1 == 0 && maior % n2 == 0) {
            printf("O MMC entre %d e %d eh: %d\n", n1, n2, maior);
            break;
        }
        maior++;
    }

    return 0;
}
