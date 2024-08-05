
#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){

    float ca, co, hi;
    float perimetro, area, angulo1, angulo2;

    printf("Digite o valor dos dois catetos de um triangulo retangulo: ");
    scanf("%f %f", ca,co);

    hi = sqrt(pow(ca,2) + pow(co,2));

    perimetro = ca + co + hi;
    area = (ca*co)/2;

    angulo1 = atan(ca / co) * (180 / PI);
    angulo2 = 90 - angulo1;

    printf("O valor da hipotenusa eh de: %.2f\n", hi);
    printf("O valor da area eh de:%.2f\n", area);
    printf("ao valor do perimetro eh de:%.2f\n", perimetro);
    printf("O valor dos dois angulos sao de:\n");
    printf("Angulo 1 =%.2f\n", angulo1);
    printf("Angulo 2 =%.2f\n", angulo2);
    
    
    return 0;
}
