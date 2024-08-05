#include <stdio.h>
#include <math.h>

int main() {
    double valorImovel, entrada, jurosAnual, valorPrestacao;
    int meses;

    printf("Digite o valor do imovel (R$): ");
    scanf("%lf", &valorImovel);

    printf("Digite o valor da entrada (R$): ");
    scanf("%lf", &entrada);

    printf("Digite o numero de meses do financiamento: ");
    scanf("%d", &meses);

    
    if (valorImovel <= 100000.00 || entrada < valorImovel * 0.2 || entrada > valorImovel * 0.75 || meses < 60 || meses > 360) {
        printf("Os valores fornecidos nao atendem aos requisitos.\n");
        return 1; 
    }

    jurosAnual = 0.10;

    
    double saldoDevedor = valorImovel - entrada;
    double jurosMensais = jurosAnual / 12.0;
    double amortizacaoMensal = saldoDevedor / meses;
    
    valorPrestacao = amortizacaoMensal + saldoDevedor * jurosMensais;

    printf("O valor da primeira prestacao e: R$ %.2lf\n", valorPrestacao);

    
    double valorTotalPago = valorPrestacao * meses;

    printf("O valor total pago ao final do financiamento e: R$ %.2lf\n", valorTotalPago);

    return 0;
}
