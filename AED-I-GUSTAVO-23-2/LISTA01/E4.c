#include <stdio.h>
#include <string.h>

int main() {

    int TAM ; 
    int count=0;
    char nome[100];

    printf("Digite o seu nome completo: ");
    fgets(nome, sizeof(nome), stdin); 

    TAM = strlen(nome);

    for (int i = 0; i < TAM -1; i++)
    {
        if (nome[i] == ' ')
        {
           
        } else if (('A' <= nome[i] && nome[i] <= 'Z') || ('a' <= nome[i] && nome[i] <= 'z'))
        {
            count++;
        }
    };
    
    printf("%d\n", count);
return 0;
}