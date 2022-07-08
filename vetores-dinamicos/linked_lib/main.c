#include <stdio.h>
#include <stdlib.h>
#include "linked_lib.h"

int main(){
 struct ll_int *linked_list = linked_list_create();
  int i;

  for (i=0; i<30; ++i){
    linked_list_push(linked_list, i*5);
  }

  printf("Size after array_list_push_back: %d\n", linked_list_size(linked_list));

  int ind = 2;
  printf("Index: %d, value: %d\n",ind, linked_list_get(linked_list, ind));

  linked_list_destroy(linked_list);
  return 0;

}