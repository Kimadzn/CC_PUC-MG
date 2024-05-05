#include <stdio.h>

int main() {
    double salarioBruto;
    double deducaoINSS = 0.0;
    double deducaoIPRF = 0.0;

    // Solicita ao usuário o valor do salário bruto
    printf("Digite o valor do salário bruto: R$ ");
    scanf("%lf", &salarioBruto);

    // Calcula a dedução do INSS
    if (salarioBruto <= 1320.0) {
        deducaoINSS = salarioBruto * 0.075;
    } else if (salarioBruto <= 2571.29) {
        deducaoINSS = salarioBruto * 0.09;
    } else if (salarioBruto <= 3856.94) {
        deducaoINSS = salarioBruto * 0.12;
    } else if (salarioBruto <= 7507.49) {
        deducaoINSS = salarioBruto * 0.14;
    } else {
        deducaoINSS = 7507.49 * 0.14;
    }

    // Calcula a base de cálculo para o IPRF
    double baseCalculoIPRF = salarioBruto - deducaoINSS;

    // Calcula a dedução do IPRF
    if (baseCalculoIPRF <= 2112.0) {
        deducaoIPRF = 0.0;
    } else if (baseCalculoIPRF <= 2826.65) {
        deducaoIPRF = (baseCalculoIPRF - 2112.0) * 0.075;
    } else if (baseCalculoIPRF <= 3751.05) {
        deducaoIPRF = (baseCalculoIPRF - 2826.65) * 0.15 + 214.12;
    } else if (baseCalculoIPRF <= 4664.68) {
        deducaoIPRF = (baseCalculoIPRF - 3751.05) * 0.225 + 535.81;
    } else {
        deducaoIPRF = (baseCalculoIPRF - 4664.68) * 0.275 + 839.36;
    }

    printf("Dedução do INSS: R$ %.2lf\n", deducaoINSS);
    printf("Dedução do IPRF: R$ %.2lf\n", deducaoIPRF);

    return 0;
}
