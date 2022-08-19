#include <stdio.h>

struct horario {
  int horas;
  int minutos;
  int segundos;
};

int main(void) {
  struct horario teste[5];

  teste[0].hora = 10;
  teste[0].minutos = 20;
  teste[0].segundos = 30;

  return 0;
}