#include <stdio.h>
#include <stdlib.h>

struct x {
  int a;
  int b;
  int c;
};

int main(void){
  int x;
  double y;
  int vetor[10];

  struct x estrutura;

  printf("%li\n", sizeof(x)); // sizeof() retorna o tamanho do tipo de dado em bits
  printf("%li\n", sizeof(y));
  printf("%li\n", sizeof(char));
  printf("%li\n", sizeof(vetor));
  printf("%li\n", sizeof(estrutura));

  return 0;
}