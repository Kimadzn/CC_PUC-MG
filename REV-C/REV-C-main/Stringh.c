#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (void) 
{
    char str1[20] = "Bom ";
    char str2[20] = "dia";

if(strcmp(str1, str2) == 0 )
printf("StringsIguais\n");
else
printf("Strings Diferentes\n");


strcat(str1, str2);
printf("palavra - %s\n", str1);
/*
    strlen Tamanho da string
    strcpy Copiar uma string
    strcat concatenar duas string
    strcmp Comparar duas string

*/
    char nome[100];

    printf("digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin); 
    printf("%s\n", nome);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");

system("pause");

return 0 ;  


}