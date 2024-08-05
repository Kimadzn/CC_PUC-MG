#include <stdio.h>

struct Data {
    int ano;
    int mes;
    int dia;
};

int main() {
    struct Data minhaData;

    minhaData.ano = 2023;
    minhaData.mes = 10;
    minhaData.dia = 29;

    printf("Minha data: %d/%d/%d\n", minhaData.dia, minhaData.mes, minhaData.ano);

    return 0;
}
