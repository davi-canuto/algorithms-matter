#include "linked_lib.h"
#include <stdlib.h>

struct linked_node_int {
  int value;
  struct linked_node_int *next;
};

struct ll_int{
  struct linked_node_int *first;
  struct linked_node_int *last;
  unsigned int size;
};

linked_node_int * linked_list_create(){
  // Allocate memory space for a pointer of type ll_int
  struct ll_int *new_list=(struct ll_int*)malloc(sizeof(struct ll_int));

  // Create the list by assigning 0 to the first
  new_list->first=0;
  // Create the list by assigning 0 to the last
  new_list->last=0;
  // Create the list by assigning 0 to the size
  new_list->size=0;

  return new_list;
}

void linked_list_push(struct ll_int *list, int x){
  // Allocate memory space for a pointer new_node
  struct linked_node_int *new_node = (struct linked_node_int*)malloc(sizeof(struct linked_node_int));

  // Assign x to new_node value
  new_node->value = x;

  // Assignt the next value the node as empty
  new_node->next = list->first;

  // Assign the first element of the list to the new node
  list->first = new_node;

  // Added 1 to a list size
  list->size++;
}

unsigned int linked_list_size(struct ll_int *list){
  return list->size;
}

int linked_list_get(struct ll_int *list, int ind){
  int i;
  // Checks if the index passed exceeds the size of the list
  if(ind >= list->size){
    return -1;
  }

  // Assigns pointer to current a first element in the list
  struct linked_node_int *current = list->first;

  // It loops through the list passing the first element pointer to the current
  for(i=0; i<ind; i++){
    current = current->next;
  }

  // Return the current value
  return current->value;
}

unsigned int linked_list_pop_back(struct ll_int *list){
  if(list->size == 1){
    list->first=0;
    list->last=0;
    return 0;
    list->size=0;
  }

  if(list->first == 0){
    return 1;
  }
  list->last->value;
  struct ll_int *new_last = list->first;
  struct linked_node_int *n = new_last;
  while (n->next != list->last){
    new_last = new_last->last;
  }
  n->next = 0;
  free(list->last);
  list->last = new_last;
  list->size--;

  return 0;
}

unsigned int linked_list_insert_at(struct ll_int *list, int ind, int x){
  int i;
  if(list->size <= ind){
    for(i = list->size; i<= ind; i++){
      linked_list_push(list, 0);
    }
  }

  struct linked_node_int *current = list->first;

  for(i=0; i<list->size; i++){
    if( i == ind){
      current->value = x;
    }
    current = current->next;
  }
  return 0;

}

void linked_list_destroy(struct ll_int *list){
  free(list);
}

unsigned int linked_list_remove_from(struct ll_int *list, int ind){
  int i;

  if(ind == list->size -1){
    linked_list_pop_back(list);
  }

  struct linked_node_int *current = list->first;

  for(i = 0; i<=ind ; ++i){
    if(i == ind -1){
      free(current->next);
      current->next = current->next->next;
    }
    current = current->next;
  }
  list->size--;
  return 0;
}