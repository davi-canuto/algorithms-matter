#include <stdio.h>
#include "vetor_int.h"

void print_vector(int a[], int tamanho){
  printf("{ ");
  int i;
  for( i=0; i<tamanho; ++i){
    printf("%d", a[i]);
  }
  printf(" }\n");
}

int main(){
  int a1[50000], capacidade=50000, tamanho=0;
  int i;
  for( i=0; i<10; ++i){
    tamanho = append_int(a1, &tamanho, capacidade, i*3);
  }
  print_vector(a1, tamanho);
  return 0;
}