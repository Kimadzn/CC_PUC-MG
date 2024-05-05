#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    int num, par, impar; 

    printf("DIgite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("O numero eh par\n");
    }else{
    printf("O numero eh impar\n");
    }
    return 0;
}