#include <stdio.h>

struct horario {
  int horas;
  int minutos;
  int segundos;
};

int main(void) {
  struct horario teste(struct horario x);

  struct horario agora = {
    .horas = 20,
    .segundos = 30,
    .minutos = 10
  };

  struct horario proxima = teste(agora);

  printf("MAIN: %i:%i:%i\n", proxima.horas, proxima.minutos, proxima.segundos);
  return 0;
}

struct horario teste(struct horario x){
  printf("TESTE: %i:%i:%i\n", x.horas, x.minutos, x.segundos);

  x.horas = 100;
  x.minutos = 100;
  x.segundos = 100;

  return x;
}