#include <stdio.h>

int main(void) {
  int i, a[5], *p;

  for( i=0; i<5; ++i){
    a[i] = i*2+3;
  }
  p = a;

  for( i=0 ; i<5; ++i){
    printf("%d ", *p++);
  }

  printf("\n");
  return 0;
}