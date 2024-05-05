#include <stdio.h>
#include <math.h>

int main(void)
{
    double areaBase, altura, volume, areaSuperficial;

    printf("Informe a area da base da piramide: ");
    scanf("%lf", &areaBase);
    printf("Informe a altura da piramide: ");
    scanf("%lf", &altura);
    volume = (1.0 / 3.0) * areaBase * altura;
    areaSuperficial = areaBase + 4.0 * (areaBase * sqrt(1.0 + (altura * altura) / (4.0 * areaBase * areaBase)));
    printf("O volume da piramide e: %.2lf\n", volume);
    printf("A area superficial da piramide e: %.2lf\n", areaSuperficial);

    return 0;
}
