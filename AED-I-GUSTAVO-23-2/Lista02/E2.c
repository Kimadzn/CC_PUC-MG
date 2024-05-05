#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    int idade; 

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if (idade < 16)
    {
        printf("Voce nao e eleitor");
    }else if ((idade == 16) || (idade == 17))
    {
        printf("Seu voto e facultativo");
    }else if ((idade>= 18) && ( idade <=64))
    {
        printf("O seu voto e obrigatorio");
    }else{
        printf("O eleitor  e facultativo (maior de idade)");
    }
    
    return 0;
}