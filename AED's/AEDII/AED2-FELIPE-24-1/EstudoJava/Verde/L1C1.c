#include <stdio.h>

int contar_maiusculos(char *str) {
    int contador = 0;
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            contador++;
        }
        str++;
    }
    return contador;
}

int main() {
    char linha[100]; // Tamanho máximo da linha
    while (1) {
        fgets(linha, sizeof(linha), stdin); // Ler uma linha da entrada padrão
        if (linha[0] == 'F' && linha[1] == 'I' && linha[2] == 'M') {
            break; // Se a linha for "FIM", sair do loop
        }
        int num_maiusculos = contar_maiusculos(linha);
        printf("%d\n", num_maiusculos); // Imprimir o número de maiúsculos na linha
    }
    return 0;
}
