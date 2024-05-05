#include <stdio.h>

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

int calcularSegundos(struct Horario tempo) {
    int totalSegundos;

    totalSegundos = tempo.hora * 3600 + tempo.minuto * 60 + tempo.segundo;

    return totalSegundos;
}

int main() {
    struct Horario meuTempo = {10, 30, 45};

    printf("Horário: %02d:%02d:%02d\n", meuTempo.hora, meuTempo.minuto, meuTempo.segundo);

    int totalSegundos = calcularSegundos(meuTempo);

    printf("Total de segundos: %d segundos\n", totalSegundos);

    return 0;
}
