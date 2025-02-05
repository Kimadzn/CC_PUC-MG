#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int CountMaiusculo(char entrada[])
{
    int count = 0;
    for (int i = 0; entrada[i] != '\0'; i++)
    {
        if (entrada[i] >= 'A' && entrada[i] <= 'Z')
        {
            count++;
        }
    }
    return count;
}

int main(void)
{
    char linha[100];
    scanf(" %[^\n]", linha);

    while (strcmp(linha , "FIM") != 0)
    {
        printf("%d\n", CountMaiusculo(linha));
        scanf(" %[^\n]", linha);
    }
    

    return 0;
}
