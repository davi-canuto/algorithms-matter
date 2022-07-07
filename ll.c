#include <stdio.h>
#include <stdlib.h>
#include "ll.h"

void *ll_int_create(){
  struct ll_int *new_list=(struct ll_int*)malloc(sizeof(struct ll_int));
  new_list->first=0;
  new_list->last=0;

  return new_list;
}

void *ll_int_inserir_inicio(struct ll_int *list, int x){
  struct ll_node_int *new_node = (struct ll_node_int*)malloc(sizeof(struct ll_node_int));
  new_node->value = x;
  new_node->next = list->first;
  list->first = new_node;

  return list;
 }

void print_list(struct ll_int *ll){
  struct ll_node_int *current = ll->first;
  printf("Lista: ");

  while( current != 0 ){
    printf(" %d ->", current->value);
    current = current->next;
  }
  printf(" NULL\n");
}