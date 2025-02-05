#include <stdio.h>

struct Data {
    int ano;
    int mes;
    int dia;
};

int verificarData(int ano, int mes, int dia) {
    int bissexto = 0;

    if (ano >= 1 && mes >= 1 && mes <= 12) {
        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
            bissexto = 1;
        }

        if (mes == 2) {
            if (bissexto && dia >= 1 && dia <= 29) {
                return 1;
            } else if (dia >= 1 && dia <= 28) {
                return 1;
            }
        } else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia >= 1 && dia <= 30) {
            return 1;
        } else if (dia >= 1 && dia <= 31) {
            return 1;
        }
    }
    return 0;
}

struct Data validarEstruturaData(int ano, int mes, int dia) {
    struct Data dataValidada;

    if (verificarData(ano, mes, dia)) {
        dataValidada.ano = ano;
        dataValidada.mes = mes;
        dataValidada.dia = dia;
    } else {
        dataValidada.ano = 0;
        dataValidada.mes = 0;
        dataValidada.dia = 0;
    }

    return dataValidada;
}

int main() {
    int ano = 2023;
    int mes = 10;
    int dia = 29;

    struct Data dataValidada = validarEstruturaData(ano, mes, dia);

    if (dataValidada.ano == 0 && dataValidada.mes == 0 && dataValidada.dia == 0) {
        printf("Data inválida\n");
    } else {
        printf("Data válida: %d/%d/%d\n", dataValidada.dia, dataValidada.mes, dataValidada.ano);
    }

    return 0;
}
