#include <stdio.h>
#include <math.h>

double calcularLn(double x, int n) {
    double ln_x = 0.0;
    int i;
    double termo = 1.0;

    for (i = 1; i <= n; i++) {
        termo *= (-1.0 * (i - 1) * (x - 1)) / i; 
        ln_x += termo; 
    }

    return ln_x;
}

int main() {
    double x;
    int n;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    printf("Digite o número de termos (n): ");
    scanf("%d", &n);

    if (x <= 0) {
        printf("O logaritmo natural não está definido para x <= 0.\n");
    } else if (n <= 0) {
        printf("O número de termos (n) deve ser maior que zero.\n");
    } else {
        double resultado = calcularLn(x, n);
        double ln_real = log(x); 

        printf("ln(%.2lf) usando a série com %d termos: %.8lf\n", x, n, resultado);
        printf("ln(%.2lf) usando a função log() da biblioteca math.h: %.8lf\n", x, ln_real);
    }

    return 0;
    
}


