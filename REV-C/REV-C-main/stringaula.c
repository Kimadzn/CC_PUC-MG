#include <stdio.h>
#include <string.h>



const int tam = 50;

int main(){

    
    char texto[tam];
    
    printf("Digite um texto \n");
    scanf("%[^\n]", texto);
    
    int cont = 0;

    int tamanho = strlen(texto);

    for(int i = 0; i < tamanho; i++){
        if((texto[i]=='a')||(texto[i]=='e')||(texto[i]=='i')||(texto[i]=='o')||(texto[i]=='u')||
        (texto[i]=='A')||(texto[i]=='E')||(texto[i]=='I')||(texto[i]=='O')||(texto[i]=='U')){
            cont++;
        }
    }
    printf("A quantidade de vogais e %d \n",cont);

    getchar();
    return 0;
}