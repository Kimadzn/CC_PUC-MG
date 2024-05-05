#include <stdio.h>

int main(void)
{
    char nome[100]; 
    int matricula;

    printf("Digite seu NOME e MATRICULA\n");

    printf("Nome: ");
    scanf("%s", nome); 

    printf("Matricula: ");
    scanf("%d", &matricula);

    printf("Aluno: %s, matricula %d\n", nome, matricula);

    return 0;
}
