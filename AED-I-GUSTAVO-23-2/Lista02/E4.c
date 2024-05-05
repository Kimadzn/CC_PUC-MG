#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    float peso, kg, altura, imc;

    printf("Digite o peso em kg\n");
    scanf("%f", &peso);

    printf("Digite a altura em metros\n");
    scanf("%f", &altura);

    imc = (peso/(altura*altura));

    if(imc<16)
    {
        printf("Hecticidade morbida");
    }else if ((imc>= 16) || (imc <=17))
    {
        printf("Hecticidade grave");
    }else if ((imc>= 17) || (imc <=18.5))
    {
        printf("Abaixo do peso");
    }else if ((imc>= 18.5) || (imc <=25))
    {
        printf("Peso Normal");
    }else if ((imc>= 25) || (imc <=30))
    {
        printf("Sobrepeso");
    }else if ((imc>= 30) || (imc <=35))
    {
        printf("Obesidade");
    }else if ((imc>= 35) || (imc <=40))
    {
        printf("Obesidade grave");
    }else if (imc>= 40)
    {
        printf("Obesidade Morbida");
    }
    

    return 0;
}