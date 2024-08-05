#include <stdio.h>

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

struct Horario somarHorarios(struct Horario horario1, struct Horario horario2) {
    struct Horario resultado;

    // Soma dos segundos
    resultado.segundo = horario1.segundo + horario2.segundo;

    // Verifica se os segundos ultrapassaram 59 e ajusta os minutos e os segundos
    if (resultado.segundo >= 60) {
        resultado.segundo -= 60;
        resultado.minuto++;
    }

    // Soma dos minutos
    resultado.minuto += horario1.minuto + horario2.minuto;

    // Verifica se os minutos ultrapassaram 59 e ajusta as horas e os minutos
    if (resultado.minuto >= 60) {
        resultado.minuto -= 60;
        resultado.hora++;
    }

    // Soma das horas
    resultado.hora += horario1.hora + horario2.hora;

    // Verifica se as horas ultrapassaram 23 e ajusta para o novo dia, se necessário
    if (resultado.hora >= 24) {
        resultado.hora -= 24;
    }

    return resultado;
}

int main() {
    struct Horario horario1 = {10, 30, 45};
    struct Horario horario2 = {4, 20, 10};

    printf("Horário 1: %02d:%02d:%02d\n", horario1.hora, horario1.minuto, horario1.segundo);
    printf("Horário 2: %02d:%02d:%02d\n", horario2.hora, horario2.minuto, horario2.segundo);

    struct Horario resultado = somarHorarios(horario1, horario2);

    printf("Resultado da soma: %02d:%02d:%02d\n", resultado.hora, resultado.minuto, resultado.segundo);

    return 0;
}
