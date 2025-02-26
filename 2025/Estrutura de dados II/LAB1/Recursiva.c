#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int CountMaiusculoRecursivo(char entrada[], int index)
{
    if (entrada[index] == '\0') 
    {
        return 0;
    }

    int count = 0;
    if (entrada[index] >= 'A' && entrada[index] <= 'Z')
    {
        count = 1;
    }

    return count + CountMaiusculoRecursivo(entrada, index + 1);
}

int main(void)
{
    char linha[100];
    scanf(" %[^\n]", linha);

    while (strcmp(linha, "FIM") != 0)
    {
        printf("%d\n", CountMaiusculoRecursivo(linha, 0));
        scanf(" %[^\n]", linha);
    }

    return 0;
}
