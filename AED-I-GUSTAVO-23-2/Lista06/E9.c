#include <stdio.h>

// Estrutura para armazenar uma data
struct Data {
    int ano;
    int mes;
    int dia;
};

// Estrutura para armazenar um horário
struct Horario {
    int hora;
    int minuto;
    int segundo;
};

// Estrutura que contém as estruturas de data e horário
struct DataHorario {
    struct Data data;
    struct Horario horario;
};

int main() {
    struct DataHorario dataHorarioExemplo;

    dataHorarioExemplo.data.ano = 2023;
    dataHorarioExemplo.data.mes = 10;
    dataHorarioExemplo.data.dia = 29;

    dataHorarioExemplo.horario.hora = 10;
    dataHorarioExemplo.horario.minuto = 30;
    dataHorarioExemplo.horario.segundo = 45;

    printf("Data e Horário: %d/%d/%d %02d:%02d:%02d\n", 
        dataHorarioExemplo.data.dia, dataHorarioExemplo.data.mes, dataHorarioExemplo.data.ano,
        dataHorarioExemplo.horario.hora, dataHorarioExemplo.horario.minuto, dataHorarioExemplo.horario.segundo);

    return 0;
}
