#include <stdio.h>

int main(void){

  int vetor[3] = {1,2,3};
  int *ponteiro = &vetor[0];

  printf("%i", *ponteiro);

  return 0;
}