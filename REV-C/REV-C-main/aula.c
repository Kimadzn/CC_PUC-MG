#include <stdio.h>
double rendaPerCapita(int n, double salarios[], int filhos[])
{
    double somaSalarios = 0;
    int somaPessoas = n;
    for ( int i = 0; i < n; i++)
    {
        somaSalarios += salarios [i];
        somaPessoas += filhos[i];
    }
    return somaSalarios/somaPessoas;
}
int main(void)
{
    int n;
    printf("Escreva o total de filhos \n");
    scanf("%d", &n);
    double salarios[n];
    int filhos[n];
    for(int i = 0 ; i<n; i++)
    {
        printf("Digite o salario e a quantidade de filhos\n");
        scanf("%f %d", &salarios[i], &filhos[i]);
    }
    double renda = rendaPerCapita (n, salarios, filhos);
    printf("A renda per capia e %.2f\n", renda);
    return 0;
}
