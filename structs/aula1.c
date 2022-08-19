#include <stdio.h>

int main(void) {

  struct horario {
    int horas;
    int minutos;
    int segundos;
  };

  struct horario agora;
  agora.horas = 15;
  agora.minutos = 17;
  agora.segundos = 30;

  printf("hora: %i, minutos: %i, segundos: %i\n", agora.horas, agora.minutos, agora.segundos);

  return 0;
}