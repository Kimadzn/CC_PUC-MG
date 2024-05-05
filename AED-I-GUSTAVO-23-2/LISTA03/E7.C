#include <stdio.h>

int main() {
    int valor;
    int intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;
    int total = 0;

    while (1) {
        printf("Digite um numero inteiro entre 1 e 100 (ou 0 para encerrar): ");
        scanf("%d", &valor);

        if (valor == 0) {
            break;
        }

        if (valor < 1 || valor > 100) {
            printf("Valor fora do intervalo permitido. Tente novamente.\n");
            continue;
        }

        total++;

        if (valor >= 1 && valor <= 25) {
            intervalo1++;
        } else if (valor >= 26 && valor <= 50) {
            intervalo2++;
        } else if (valor >= 51 && valor <= 75) {
            intervalo3++;
        } else {
            intervalo4++;
        }
    }

    if (total > 0) {
        float porcentagem1 = (float)(intervalo1 * 100) / total;
        float porcentagem2 = (float)(intervalo2 * 100) / total;
        float porcentagem3 = (float)(intervalo3 * 100) / total;
        float porcentagem4 = (float)(intervalo4 * 100) / total;

        printf("Porcentagem de valores no intervalo [1..25]: %.2f%%\n", porcentagem1);
        printf("Porcentagem de valores no intervalo [26..50]: %.2f%%\n", porcentagem2);
        printf("Porcentagem de valores no intervalo [51..75]: %.2f%%\n", porcentagem3);
        printf("Porcentagem de valores no intervalo [76..100]: %.2f%%\n", porcentagem4);
    } else {
        printf("Nenhum valor foi lido.\n");
    }

    return 0;
}
