#include <stdio.h>
#include <stdlib.h>

int main(void){
  int n,s,i;
  scanf("%d %d", &n, &s);
  int a[n];
  for(i=0;i<n;++i){
    scanf("%d",&a[i]);
  }
  printf("%d\n", soma_sublista_bt(a,n,s));

  return 0;
}

int soma_sublista_bt(int a[], int tam, int soma){
  int r;
  if ( soma<0 || tam==0 ) return 0;
  if ( soma==0 ) return 1;
  r=soma_sublista_bt(a,tam-1,soma-a[tam-1]);
  r = r||soma_sublista_bt(a,tam-1,soma);
  return r;
}