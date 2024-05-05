#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehPalindromo(const char *palavra) {
    int len = strlen(palavra);
    for (int i = 0; i < len / 2; i++) {
        if (tolower(palavra[i]) != tolower(palavra[len - i - 1])) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char frase[100]; 
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int len = strlen(frase);
    int inicio = 0;
    int fim = 0;

    for (int i = 0; i < len; i++) {
        if (isalpha(frase[i])) {
            fim = i;
        } else {
            if (fim - inicio > 2) {
                char palavra[100];
                strncpy(palavra, frase + inicio, fim - inicio + 1);
                palavra[fim - inicio + 1] = '\0';

                if (ehPalindromo(palavra)) {
                    printf("Palíndromo encontrado: %s\n", palavra);
                }
            }
            inicio = i + 1;
            fim = i + 1;
        }
    }

    return 0;
}
