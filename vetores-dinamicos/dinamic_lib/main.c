#include <stdio.h>
#include <stdlib.h>
#include "array_lib.h"

int main(){
 struct array_list_int *dinamic_arr = array_list_create();
  int i,ind_for_get = 29, value_for_index = 145;

  for (i=0; i<30; ++i){
    array_list_push_back(dinamic_arr, i*5);
  }

  printf("Size after array_list_push_back: %d\n", array_list_size(dinamic_arr));

  printf("The value contained in the index %d is: %d\n", ind_for_get, array_list_get(dinamic_arr, ind_for_get));

  printf("Size after array_list_pop_back: %d\n", array_list_pop_back(dinamic_arr));

  printf("The element %d find in index %d\n",value_for_index, array_list_find(dinamic_arr, value_for_index));

  int value_for_insert=11, index_for_insert=5;
  printf("Insert %d in index %d\n",value_for_insert, index_for_insert);
  array_list_insert_at(dinamic_arr, index_for_insert, value_for_index);

  printf("Capacity for the array: %d\n", array_list_capacity(dinamic_arr));

  array_list_destroy(dinamic_arr);
  return 0;

}