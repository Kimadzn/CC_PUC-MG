#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double anguloA, anguloB, anguloC;

    printf("Digite o valor do lado a: ");
    scanf("%lf", &a);
    printf("Digite o valor do lado b: ");
    scanf("%lf", &b);
    printf("Digite o valor do lado c: ");
    scanf("%lf", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // Calcula os ângulos internos usando a Lei dos Cossenos
        anguloA = acos((b * b + c * c - a * a) / (2 * b * c));
        anguloB = acos((a * a + c * c - b * b) / (2 * a * c));
        anguloC = M_PI - anguloA - anguloB;

        // Determina o tipo de triângulo com base nos ângulos e lados
        if (anguloA < M_PI / 2 && anguloB < M_PI / 2 && anguloC < M_PI / 2) {
            printf("O triângulo é agudo e ");
        } else if (anguloA > M_PI / 2 || anguloB > M_PI / 2 || anguloC > M_PI / 2) {
            printf("O triângulo é obtuso e ");
        } else {
            printf("O triângulo é reto e ");
        }

        if (a == b && b == c) {
            printf("equilátero.\n");
        } else if (a == b || b == c || a == c) {
            printf("isósceles.\n");
        } else {
            printf("escaleno.\n");
        }

        // Imprime os ângulos internos em graus
        printf("Ângulo A: %.2lf graus\n", anguloA * 180 / M_PI);
        printf("Ângulo B: %.2lf graus\n", anguloB * 180 / M_PI);
        printf("Ângulo C: %.2lf graus\n", anguloC * 180 / M_PI);
    } else {
        printf("Os valores não formam um triângulo.\n");
    }

    return 0;
}
