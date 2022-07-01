#include <stdio.h>
#include "vetor_int.h"

void print_vector(int *a, int tamanho){
  int i;
  printf("{ ");
  for( i=0; i<tamanho; ++i){
    printf("%d", a[i]);
  }
  printf(" }\n");
}

int main(){
  int i, a1[50], capacidade=5, tamanho=0;
  for( i=0; i<10; ++i){
    append_int(a1, &tamanho, capacidade, i*3);
  }
  print_vector(a1, tamanho);
  return 0;
}