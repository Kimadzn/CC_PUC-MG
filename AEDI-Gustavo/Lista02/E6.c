#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int numero;

printf("Escreva um numero entre 1 e 7\n");
scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Não existe dia da semana com o número %d\n", numero);
            break;
    }

    return 0;

}





