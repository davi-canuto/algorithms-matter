#include <stdio.h>
#include <stdlib.h>

struct ll_node_int {
  int value;
  struct ll_node_int *next;
};

int main(){
  struct ll_node_int *first=0;
  first = (struct ll_node_int*)malloc(sizeof(struct ll_node_int));
  first->value = 5;
  first->next = 0;

  struct ll_node_int *second=(struct ll_node_int*)malloc(sizeof(struct ll_node_int));
  first->next->value = 8;
  first->next->next = 0;
  first->next = second;
  printf("Valor em first     : %d\n", first->value );
  printf("First aponta para  : %p\n", first->next);
  printf("Valor em second    : %d\n", first->next->value);
  printf("Second aponta para : %p\n", first->next->next) ;

  return 0;
  free(first->next);
  free(first->next->next);
}