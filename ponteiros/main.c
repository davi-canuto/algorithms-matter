#include <stdio.h>

int main(void) {
  int x;
  x = 10;

  int *ponteiro; // ponteiro aponta para um endereço de memória
  ponteiro = &x; // ponteiro agora aponta para o endereço de memória x

  printf("%i\n", *ponteiro); // imprime o valor contido no endereço de memória X que é onde o ponteiro aponta
  printf("%i\n", ponteiro); // imprime o endereço de memória da váriavel ponteiro que é um ponteiro

  return 0;
}