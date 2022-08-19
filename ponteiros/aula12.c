#include <stdio.h>

int main(void){
  int vetor[3] = {1,2,3};

  int *ponteiro = &vetor[0];

  printf("primeiro membro do array: %i\n", *ponteiro);

  ponteiro++;
  printf("segundo membro do array: %i\n", *ponteiro);

  ponteiro++;
  printf("terceiro membro do array: %i\n", *ponteiro);

  int *p2 = vetor;

  *(p2 + 1) = 15;
  printf("o valor do segundo elemento do array é: %i\n", vetor[1]);

  return 0;
}