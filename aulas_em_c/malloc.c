#include <stdio.h>
#include <stdlib.h>

int main(){
  int * a;
  int n,i;
  scanf("%d", &n);
  a = (int*)malloc(sizeof(int)*n);
  printf("endereço do ínicio da memória: %p (%lld)\n",a, (long long)a);
  if (a==0){
    printf("ERRO Ao alocar mémoria");
    exit(1);
  }
  for(i=0 ; i<n ; ++i){
    scanf("%d", a+i);
  }
  for(i=0 ; i<n ; ++i){
    printf("%d", a[i]);
  }
  printf("\n");
  free(a);
  return 0;
}