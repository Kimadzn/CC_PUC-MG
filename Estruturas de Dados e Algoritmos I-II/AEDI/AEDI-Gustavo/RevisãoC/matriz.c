#include <stdio.h>
#include <stdlib.h>


int main (void){
     int matriz[3][3], i, j;
     printf("\nDigite o valor da Matriz \n");
     
     for (i = 0 ; i < 3; i++) // Controle de linhas (I)
     {
        for(j = 0;  j<3; j++)// Controle de colunas (J)
        {
            printf("\n Elemento [%d][%d] = ", i, j);
            scanf("%d", &matriz [i] [j]);
        }
        
     }

     printf("As matrizes Digitadas são:\n");

     //Saida de dados
     for (i = 0 ; i < 3; i++) // Controle de linhas (I)
     {
        for(j = 0;  j<3; j++)// Controle de colunas (J)
        {
            printf("\n Elemento [%d][%d] =  %d   ", i, j, matriz[i][j]);
            
        }
        printf("\n");
     }
     


     system("pause");
     return 0;
}