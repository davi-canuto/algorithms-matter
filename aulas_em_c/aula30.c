#include <stdio.h>
#include <stdlib.h>

struct ll_node_int{
  int value;
  struct ll_node_int *next;
};

struct ll_node_int *ll_inserir_inicio(struct ll_node_int *first, int x){
  struct ll_node_int *new_node = (struct ll_node_int*)malloc(sizeof(struct ll_node_int));

  new_node->value = x;
  new_node->next = first;
  first = new_node;
  return first;
}

void print_list(struct ll_node_int *first){
  struct ll_node_int *current = first;

  printf("Lista: ");
  while( current != 0 ){
    printf(" %d ->", current->value);
    current = current->next;
  }
  printf(" NULL\n");
}

int main(){
  struct ll_node_int *first=0;
  int i;
  for (i = 0; i<10; ++i){
    first = ll_inserir_inicio(first, i*3);
  }
  print_list(first);
  return 0;
}