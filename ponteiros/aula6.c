#include <stdio.h>

int main(void) {
  struct horario {
    int *pHora;
    int *pMinuto;
    int *pSegundo;
  };

  int hora=200,segundo=400,minuto=300;

  struct horario hoje;

  hoje.pHora = &hora;
  hoje.pMinuto = &minuto;
  hoje.pSegundo = &segundo;

  printf("Hora: %i\n", *hoje.pHora);
  printf("Minuto: %i\n", *hoje.pMinuto);
  printf("Segundo: %i\n", *hoje.pSegundo);

  *hoje.pSegundo = 1000;

  printf("Segundo: %i\n", *hoje.pSegundo);
  return 0;
}