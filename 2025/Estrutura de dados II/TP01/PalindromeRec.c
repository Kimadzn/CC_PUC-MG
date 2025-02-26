#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Função para inverter a palavra
void inverter_palavra(char palavra[]) {
    int inicio = 0;
    int fim = strlen(palavra) - 1;
    while (inicio < fim) {
        // Troca os caracteres
        char temp = palavra[inicio];
        palavra[inicio] = palavra[fim];
        palavra[fim] = temp;
        
        inicio++;
        fim--;
    }
}

// Função para verificar se a palavra é igual a sua inversa
bool verificar_palavra(char palavra[]) {
    char palavra_invertida[100];  // Assume que a palavra tem no máximo 99 caracteres
    strcpy(palavra_invertida, palavra);  // Copia a palavra para a variável para poder manipulá-la

    inverter_palavra(palavra_invertida);  // Inverte a palavra

    // Verifica se a palavra original é igual à invertida
    return strcmp(palavra, palavra_invertida) == 0;
}

bool get_palavra(){

    char palavra[1000];
    scanf(" %[^\n]", palavra);
    

}

int main(){

}