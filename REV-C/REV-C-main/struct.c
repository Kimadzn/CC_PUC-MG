#include <stdio.h>
#include <stdlib.h>


int main (void){
//Definindo o contéudo do struct
struct fichaALuno{
    int matricula;
    float nota1;
    float nota2;

};
//Criando a variável aluno que sera do tipo struct fichaAluno

struct fichaALuno aluno;

printf("Numero de matricula.. :");
scanf("%d", &aluno.matricula);

printf("Iforme a primeira nota.. :");
scanf("%f", &aluno.nota1);

printf("Iforme a segunda nota.. :");
scanf("%f", &aluno.nota2);

printf("\n\n ========== Lendo dados da struct ============\n \n ");
printf("Matricula ===== : %d\n", aluno.matricula);
printf("Nota1 ===== : %f\n", aluno.nota1);
printf("Nota2 ===== : %f\n", aluno.nota2);

     system("pause");
     return 0;
}