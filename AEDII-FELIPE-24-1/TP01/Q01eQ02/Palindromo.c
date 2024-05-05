#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Função para verificar se a entrada é "FIM"
bool isFim(char *s) {
    return strcmp(s, "FIM") == 0;
}

// Função para verificar se uma string é um palíndromo
bool isPalindromo(char *s) {
    int inicio = 0;
    int fim = strlen(s) - 1;
    
    while (inicio < fim) {
        if (s[inicio] != s[fim]) {
            return false;
        }
        inicio++;
        fim--;
    }
    return true;
}

// Função principal
int main() {
    char entrada[100];

    do {
        fgets(entrada, 100, stdin);
        entrada[strcspn(entrada, "\n")] = '\0'; // Remover a quebra de linha
        
        if (!isFim(entrada)) {
            if (isPalindromo(entrada)) {
                printf("SIM\n");
            } else {
                printf("NAO\n");
            }
        }
    } while (!isFim(entrada));
    
    return 0;
}