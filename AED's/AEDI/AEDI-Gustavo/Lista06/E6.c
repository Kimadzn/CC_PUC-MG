#include <stdio.h>

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

int verificarHorario(int hora, int minuto, int segundo) {
    if (hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59 && segundo >= 0 && segundo <= 59) {
        return 1; // horário válido
    } else {
        return 0; // horário inválido
    }
}

struct Horario validarEstruturaHorario(int hora, int minuto, int segundo) {
    struct Horario horarioValidado;

    if (verificarHorario(hora, minuto, segundo)) {
        horarioValidado.hora = hora;
        horarioValidado.minuto = minuto;
        horarioValidado.segundo = segundo;
    } else {
        horarioValidado.hora = 0;
        horarioValidado.minuto = 0;
        horarioValidado.segundo = 0;
    }

    return horarioValidado;
}

int main() {
    int hora = 15;
    int minuto = 45;
    int segundo = 30;

    struct Horario horarioValidado = validarEstruturaHorario(hora, minuto, segundo);

    if (horarioValidado.hora == 0 && horarioValidado.minuto == 0 && horarioValidado.segundo == 0) {
        printf("Horário inválido\n");
    } else {
        printf("Horário válido: %02d:%02d:%02d\n", horarioValidado.hora, horarioValidado.minuto, horarioValidado.segundo);
    }

    return 0;
}
