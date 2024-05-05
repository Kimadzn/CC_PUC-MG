#include <stdio.h>

struct Data {
    int ano;
    int mes;
    int dia;
};

// Função para verificar se um ano é bissexto
int ehBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

// Função para calcular a diferença em dias entre duas datas
int diferencaEntreDatas(struct Data data1, struct Data data2) {
    int diasPorMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int totalDiasData1 = data1.ano * 365 + data1.dia;

    for (int i = 0; i < data1.mes - 1; i++) {
        totalDiasData1 += diasPorMes[i];
    }

    totalDiasData1 += (data1.ano / 4 - data1.ano / 100 + data1.ano / 400); // Considera anos bissextos

    if (data1.mes <= 2 && ehBissexto(data1.ano)) {
        totalDiasData1--; // Remove o dia extra do ano bissexto
    }

    int totalDiasData2 = data2.ano * 365 + data2.dia;

    for (int i = 0; i < data2.mes - 1; i++) {
        totalDiasData2 += diasPorMes[i];
    }

    totalDiasData2 += (data2.ano / 4 - data2.ano / 100 + data2.ano / 400); // Considera anos bissextos

    if (data2.mes <= 2 && ehBissexto(data2.ano)) {
        totalDiasData2--; // Remove o dia extra do ano bissexto
    }

    return (totalDiasData2 - totalDiasData1);
}

int main() {
    struct Data data1 = {2023, 10, 29};
    struct Data data2 = {2023, 11, 15};

    printf("Data 1: %d/%d/%d\n", data1.dia, data1.mes, data1.ano);
    printf("Data 2: %d/%d/%d\n", data2.dia, data2.mes, data2.ano);

    int diferencaDias = diferencaEntreDatas(data1, data2);

    printf("Diferença em dias: %d\n", diferencaDias);

    return 0;
}
