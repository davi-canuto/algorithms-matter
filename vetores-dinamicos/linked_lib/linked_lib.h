#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

typedef struct linked_node_int linked_node_int;

typedef struct ll_int ll_int;

linked_node_int * linked_list_create();

int linked_list_get(ll_int * list, int ind);

void linked_list_push(ll_int * list, int x);

unsigned int linked_list_pop_back(ll_int * list);

unsigned int linked_list_size(ll_int * list);

unsigned int linked_list_insert_at(ll_int * list, int ind, int x);

unsigned int linked_list_remove_from(ll_int * list, int ind);

void linked_list_destroy(ll_int * list);

#endif