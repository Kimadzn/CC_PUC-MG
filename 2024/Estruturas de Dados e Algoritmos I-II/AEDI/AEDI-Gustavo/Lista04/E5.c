#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[100]; 
    int i, j;
    int palindromo = 1; 

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);


    int len = strlen(frase);
    for (i = 0, j = 0; i < len; i++) {
        if (isalpha(frase[i])) {
            frase[j] = tolower(frase[i]);
            j++;
        }
    }
    frase[j] = '\0'; 

    len = strlen(frase); 

    
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (frase[i] != frase[j]) {
            palindromo = 0; 
            break;
        }
    }

    if (palindromo) {
        printf("A frase é um palíndromo.\n");
    } else {
        printf("A frase não é um palíndromo.\n");
    }

    return 0;
}
