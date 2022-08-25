#include <stdio.h>
#include <stdlib.h>

struct item{
  double price;
  int weight;
};

typedef struct item item;

int main(void){
  int cap, n, i;
  int bag_bt(item itens[], int cap, int n);

  printf("Digite a capacidade da mochila e a quantidade de itens: \n");
  scanf("%d %d", &cap, &n);
  item itens[n];

  printf("Digite respectitivamente o price e o weight do item\n");
  for( i=0 ; i < n; i++)
    scanf("%lf %d", &itens[i].price, &itens[i].weight);

  int res = bag_bt(itens, cap, n);
  printf("quantidade de itens que cabem na bolsa: %i\n", res);
  return 0;
}

int bag_bt(item itens[], int cap, int n){
  if ( cap<0 || n == 0) return 0;
  int res = 0;

  if ( itens[n-1].weight <= cap){
    res += 1;
    bag_bt(itens, cap - itens[n-1].weight, n-1);
  }
  int res2 = bag_bt(itens, cap, n-1);
  res2 += 1;
  return res>res2 ? res : res2;
}