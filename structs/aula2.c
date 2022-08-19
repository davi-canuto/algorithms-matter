#include <stdio.h>

int main(void) {

  struct horario {
    int horas;
    int minutos;
    int segundos;
    double test;
    char letra;
  };

  struct horario agora;

  agora.horas = 15;
  agora.minutos = 17;
  agora.segundos = 30;

  printf("AGORA: %i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);

  struct horario depois;

  depois.horas = agora.horas + 9;
  depois.minutos = agora.minutos + 20;
  depois.segundos = agora.segundos + 30;
  depois.test = 50.55 / 123;
  depois.letra = 'a';

  printf("depois.test: %f\n", depois.test);
  printf("depois.letra: %c\n", depois.letra);

  printf("DEPOIS: %i:%i:%i\n", depois.horas, depois.minutos, depois.segundos);

  return 0;
}