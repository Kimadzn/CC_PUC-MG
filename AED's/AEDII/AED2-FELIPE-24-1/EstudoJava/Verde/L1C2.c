#include <stdio.h>

int contar_maiusculos_recursivo(char *str) {
    if (*str == '\0') {
        return 0;
    }
    
    if (*str >= 'A' && *str <= 'Z') {
        return 1 + contar_maiusculos_recursivo(str + 1);
    }
    
    return contar_maiusculos_recursivo(str + 1);
}

int main() {
    char linha[100];
    while (1) {
        fgets(linha, sizeof(linha), stdin);
        if (linha[0] == 'F' && linha[1] == 'I' && linha[2] == 'M') {
            break;
        }
        int num_maiusculos = contar_maiusculos_recursivo(linha);
        printf("%d\n", num_maiusculos);
    }
    return 0;
}
