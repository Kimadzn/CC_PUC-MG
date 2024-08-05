#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100001

void printBeijuText(char *text) {
    int len = strlen(text);
    char buffer[MAX_LENGTH] = {0};
    int index = 0;
    int home = 0;

    for (int i = 0; i < len; i++) {
        if (text[i] == '[') {
            home = 1;
            index = 0;
        } else if (text[i] == ']') {
            home = 0;
        } else if (home) {
            for (int j = strlen(buffer); j >= index; j--) {
                buffer[j + 1] = buffer[j];
            }
            buffer[index] = text[i];
            index++;
        } else {
            buffer[index] = text[i];
            index++;
        }
    }

    printf("%s\n", buffer);
}

int main() {
    char text[MAX_LENGTH];

    while (scanf("%s", text) != EOF) {
        int numCases;
        scanf("%d", &numCases);
        getchar(); // Captura o caractere de nova linha após o número de casos

        for (int i = 0; i < numCases; i++) {
            printBeijuText(text);
        }
    }

    return 0;
}
