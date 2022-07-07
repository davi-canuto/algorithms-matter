#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

typedef struct array_list_int array_list_int;

array_list_int * array_list_create();

int array_list_get(array_list_int * list, int index, int *error);

unsigned int array_list_push_back(array_list_int * list, int i);

unsigned int array_list_pop_back(array_list_int * list);

unsigned int array_list_size(array_list_int * list);

int array_list_find(array_list_int * list, int element);

unsigned int array_list_insert_at(array_list_int * list, int index, int value);

unsigned int array_list_remove_from(array_list_int * list, int index);

unsigned int array_list_capacity(array_list_int * list);

double array_list_percent_occupied(array_list_int * list);

void array_list_destroy(array_list_int * list);

#endif