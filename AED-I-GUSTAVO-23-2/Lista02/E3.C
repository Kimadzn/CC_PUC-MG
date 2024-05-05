#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    int num, verif;

    printf("Escreva um numero\n");
    scanf("%d", &num);
    if (num%2==0)
    {
        printf("O numero e divisivel por 2");
    }else if (num%5==0)
    {
        printf("O numero e divisivel por 5");
    }else if (num%10==0)
    {
        printf("O numero e divisivel por 10");
    }else{
        printf("O numero nao e divisivel");
    }
    
    
    
    
    return 0;
}