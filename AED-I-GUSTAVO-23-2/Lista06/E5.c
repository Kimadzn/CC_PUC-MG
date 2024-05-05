#include <stdio.h>

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

int main() {
    struct Horario meuHorario;

    meuHorario.hora = 10;
    meuHorario.minuto = 30;
    meuHorario.segundo = 45;

    printf("Horário: %02d:%02d:%02d\n", meuHorario.hora, meuHorario.minuto, meuHorario.segundo);

    return 0;
}
