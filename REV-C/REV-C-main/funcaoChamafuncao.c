#include <stdio.h>
#include <stdlib.h>
float somaDeDigitos(float numero1, float numero2){

    float valorAbsoluto(float x);

    if(numero1<0){
        numero1 = valorAbsoluto(numero1);
    }
    if (numero2<0){
        numero2 = valorAbsoluto(numero2);
    }

    return numero1 + numero2;
}

int main(void){
    float a, b, soma;
    printf("Digite 2 numeros:\n");
    scanf("%f", &a);
    scanf("%f", &b);

    soma = somaDeDigitos(a, b);
    printf("A soma dos digitos e de : %f\n", soma);
    system("pause");
    return 0;
}

float valorAbsoluto(float x){

    return x * -1;
}