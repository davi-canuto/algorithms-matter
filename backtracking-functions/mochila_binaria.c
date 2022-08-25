#include <stdio.h>
#include <stdlib.h>

struct item{
  int peso;
  double valor;
};

typedef struct item item; // oque antes era *struct item variavel* agora é *item váriavel* por conta do typedef struct

int main(void){
  double mochila(item itens[], int n, int cap);
  int i, n, cap;
  scanf("%d %d", &n, &cap);
  item itens[n];

  for (i=0 ; i<n ; ++i)
    scanf("%d %lf", &itens[i].peso, &itens[i].valor);
  printf("%lf \n", mochila(itens,n,cap));

  return 0;
}

double mochila(item itens[], int n, int cap){
  if ( cap<0 || n==0) return 0;
  double c1=0;

  if (itens[n-1].peso <= cap)
    c1 = itens[n-1].valor + mochila(itens, n-1, cap-itens[n-1].peso);
  double c2 = mochila(itens, n-1, cap);
  return c1>c2? c1 : c2;
}