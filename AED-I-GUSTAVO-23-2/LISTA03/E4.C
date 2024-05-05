#include <stdio.h>

int main() {
    int i, nTERMOS;
    int a = 0, b = 1, c;

    printf("Digite o numero de termos para a sequencia de FIBONACCI:\n");
    scanf("%d", &nTERMOS);

    if (nTERMOS >= 1) {
        printf("%.2f", a);
    }

    for (i = 1; i < nTERMOS; i++) {
        printf(", %.2f", a + b);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
