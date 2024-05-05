#include <stdio.h>


int fatorial(int x){

    int resultado;

    if(x == 0){
        resultado = 1;
    }else{
        resultado = x * fatorial (x - 1);
    }

    return resultado;

}

int main (void){
    
    
    int numero, resultado;

    printf("Digite um nuemro inteiro:\n");
    scanf("%i", &numero);

    resultado = fatorial(numero);

    printf("O fatorial e %i\n",resultado);
    system("pause");
    return 0;
}

