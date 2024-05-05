#include <stdio.h>

#define numeroDeAlunos 4
#define numeroDeBimestres 4
#define mediaMinima 5

int main(void) {

        float notas[numeroDeAlunos][numeroDeBimestres] = {0};
        float medias[numeroDeAlunos] = {0};

        float total = 0;

        int aluno;
        int nota;

        for (aluno = 0; aluno < numeroDeAlunos; ++aluno) {
                printf("Digite abaixo as notas do aluno %d:\n", aluno + 1);
                for (nota = 0; nota < numeroDeBimestres; ++nota) {
                      scanf("%f", &notas[aluno][nota]);
                      total += notas[aluno][nota];
                }
                medias[aluno] = total / numeroDeBimestres;
                total = 0;
        }

        printf("\n");
        printf("Segue abaixo as medias dos alunos:\n");
        printf("\n");

        for (aluno = 0; aluno < numeroDeAlunos; ++aluno) {
                if (medias[aluno] >= mediaMinima){
                        printf("Aluno %d: %.2f\tAprovado!\n", aluno + 1, medias[aluno]);
                } else {
                        printf("Aluno %d: %.2f\tReprovado!\n", aluno + 1, medias[aluno]);
                }
        }
return 0;
}