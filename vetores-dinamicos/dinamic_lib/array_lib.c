#include "array_lib.h"
#include <stdlib.h>

struct array_list_int {
    int * data;
    unsigned int size,capacity;
};

array_list_int * array_list_create(){
    // Create variable with type array_list_int and allocate space in memory
    array_list_int *new_list = (array_list_int*)malloc(sizeof(array_list_int));

    // Pointer will point to the beggining spec in memory pointed above
    (*new_list).data = (int*)malloc(sizeof(int)*2);

    // Added to size defined in the struct
    (*new_list).size = 0;

    // Added to capacity defined in the struct
    (*new_list).capacity = 2;

    // Returns the new arr
    return new_list;
} // This function is O(n)

unsigned int array_list_push_back(array_list_int * arr, int value){
  // Perfoms assingment the first space in the memory at arr the value
  (*arr).data[(*arr).size] = value;

  // Perfoms the increment of 1 to the size value struct
  (*arr).size++;

  // Call the function array_list_size passing arr e returns quantity of elements in array.
  return array_list_size(arr);
}

unsigned int array_list_size(array_list_int * arr){
  // Returns quantity of elements of the array
  return (*arr).size;
}

int array_list_get(array_list_int * arr, int index, int *error){
  *error = 1;

  int i = (*arr).data[index];

  *error = 0;

  return i;
}

unsigned int array_list_pop_back(array_list_int * arr){
  return array_list_size(arr);
}

int array_list_find(array_list_int * arr, int element){
  return -1;
}

unsigned int array_list_insert_at(array_list_int * arr, int index, int value){
    return array_list_size(arr);
}

unsigned int array_list_remove_from(array_list_int * arr, int index){
  return array_list_size(arr);
}

unsigned int array_list_capacity(array_list_int * arr){
  return arr->capacity;
}

double array_list_percent_occupied(array_list_int * arr){
  return 0.0;
}

void array_list_destroy(array_list_int * arr){

}