#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Função para verificar se a entrada é "FIM"
int isFim(char *s) {
    return (strlen(s) == 3 && s[0] == 'F' && s[1] == 'I' && s[2] == 'M');
}

// Função para gerar um caractere aleatório
char randomChar() {
    return 'a' + (rand() % 26);
}

// Função para realizar a troca aleatória na string
char *randomChange(char *s) {
    char *result = malloc(strlen(s) + 1);
    if (result == NULL) {
        fprintf(stderr, "Erro ao alocar memória\n");
        exit(1);
    }

    char c1 = randomChar();
    char c2 = randomChar();
    int length = strlen(s);

    for (int x = 0; x < length; x++) {
        if (s[x] == c1) {
            result[x] = c2;
        } else {
            result[x] = s[x];
        }
    }
    result[length] = '\0';

    return result;
}

int main() {
    char entrada[1000][1000];
    int numEntrada = 0;

    do {
        fgets(entrada[numEntrada], sizeof(entrada[numEntrada]), stdin);
        entrada[numEntrada][strcspn(entrada[numEntrada], "\n")] = '\0'; // Remove a nova linha
    } while (!isFim(entrada[numEntrada++]));

    numEntrada--;

    srand(time(NULL)); // Inicializa a semente aleatória

    for (int x = 0; x < numEntrada; x++) {
        char *resultado = randomChange(entrada[x]);
        printf("%s\n", resultado);
        free(resultado); // Libera a memória alocada
    }

    return 0;
}
