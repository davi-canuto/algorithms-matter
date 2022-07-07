#ifndef __LL_INT__
#define __LL_INT__

struct ll_node_int{
  int value;
  struct ll_node_int *next;
};

struct ll_int{
  struct ll_node_int *first;
  struct ll_node_int *last;
};

void *ll_int_create();

void *ll_int_inserir_inicio(struct ll_int *list, int x);

void print_list(struct ll_int *ll);

#endif