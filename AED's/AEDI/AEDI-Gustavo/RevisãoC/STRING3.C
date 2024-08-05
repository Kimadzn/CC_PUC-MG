#include <stdio.h>
#include <string.h>



const int tam = 50;

int main(){

    char caracc;
    char texto[tam];
    
    printf("Digite um texto \n");
    scanf("%[^\n]", texto);
    printf("Digite um caractere para verificar quantas vezes ele se repete \n");
    scanf("%c", &caracc);
    
    int cont = 0;
    const char caractere = caracc;

    int tamanho = strlen(texto);

    for(int i = 0; i < tamanho; i++){
        if(texto[i]==caractere){
            printf("A posicao do \"%c\" e %d\n",caractere, i+1);    
            cont++;
        }
    }
    printf("A quantidade de caracteres \"%c\" na string %s e %d \n", caractere, texto, cont);

    getchar();
    return 0;
}