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

// Função para adicionar dias a uma data
struct Data adicionarDias(struct Data data, int dias) {
    int diasPorMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (dias > 0) {
        // Verifica se o ano é bissexto para fevereiro
        if (data.mes == 2 && ehBissexto(data.ano)) {
            diasPorMes[1] = 29;
        } else {
            diasPorMes[1] = 28;
        }

        int diasNoMes = diasPorMes[data.mes - 1] - data.dia;

        if (dias <= diasNoMes) {
            data.dia += dias;
            break;
        } else {
            data.dia = 0;
            dias -= diasNoMes + 1;
            if (data.mes == 12) {
                data.mes = 1;
                data.ano++;
            } else {
                data.mes++;
            }
        }
    }
    return data;
}

int main() {
    struct Data minhaData = {2023, 10, 29};
    int diasParaAdicionar = 15;

    printf("Data original: %d/%d/%d\n", minhaData.dia, minhaData.mes, minhaData.ano);

    struct Data novaData = adicionarDias(minhaData, diasParaAdicionar);

    printf("Nova data: %d/%d/%d\n", novaData.dia, novaData.mes, novaData.ano);

    return 0;
}
