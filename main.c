#include <stdio.h>
#include <stdlib.h>
#include "ll.h"

int main(){
  struct ll_int *l01 = ll_int_create();

  int i;

  for (i=0; i<5; ++i){
    ll_int_inserir_inicio(l01, i*5);
  }

  print_list(l01);
  return 0;
}