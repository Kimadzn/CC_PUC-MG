#include <stdio.h>
#include <string.h>



const int tam = 50;

int main(){

    
    char texto[tam];
    
    printf("Digite um texto \n");
    scanf("%[^\n]", texto);
    
    int cont = 0;
    const char caractere = 'A';

    int tamanho = strlen(texto);

    for(int i = 0; i < tamanho; i++){
        if(texto[i]==caractere){
            printf("A posicao do \"%c\" e %d\n",caractere, i+1);    
        }
        
    }
    getchar();
    return 0;
}