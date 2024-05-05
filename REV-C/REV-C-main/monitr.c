#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void vetorAleato(int tam, float vet[])
{
    for(int i = 0; i < tam; i++ )
    {
        vet[i] = rand()%5;
    }
}
int main()
{
    srand (time(0));
    float vet1 [15];
    vetorAleato(15, vet1);
    float vet2[15];
    vetorAleato(15, vet2);    
    float vet3[15];
    vetorAleato(15, vet3);

    for(int i = 0; i <15; i++)
    {
        if(vet1[i]== vet2[i])
        {
            vet3[i] = 1;
        }else{
            vet3[i] = 0;
        }
        printf("%g\t", vet3[i]);
    }


    return 0 ;
}