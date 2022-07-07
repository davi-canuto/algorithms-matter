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
  // Changes the error memory space to 1
  *error = 1;

  // Performs the assignment of the value variable and the value content
  int value = (*arr).data[index];

  // Changes the error memory space to 0
  *error = 0;

  return value;
}

unsigned int array_list_pop_back(array_list_int * arr){
  // Assigns the last value of the array to zero leaving the space empty
  (*arr).data[(*arr).size-1] = 0;

  // Decrease the size of the array by 1
  (*arr).size--;

  return array_list_size(arr);
}

int array_list_find(array_list_int * arr, int element){
  // Will assign the last item in the array to ind and declaret i
  int ind =-1, i;

  // It will go through the entire list checking if it is equal to the element passed
  for(i=0; i<(*arr).size;i++){
    if((*arr).data[i] == element)
      ind = i;
  }

  // Returns the ind of the element
  return ind;
}

unsigned int array_list_insert_at(array_list_int * arr, int index, int value){

  // Checks if array capacity has been reached
  if((*arr).size == (*arr).capacity){
    int i;

    // Will declare a variable to contain the new array capacity
    int new_capacity = (*arr).capacity+2;

    // Will allocate memory to an array that has more capacity
    int *new_arr = (int*)malloc(sizeof(int)+new_capacity);

    // will pass the elements of the old array to the new array
    for(i=0; i<(*arr).size;i++){
      new_arr[i] = (*arr).data[i];
    }

    // The pointer that pointed to the old memory space now points to the new memory space
    array_list_destroy((*arr).data);
    (*arr).capacity = new_capacity;
  }
  // It will pass the value received in value to the index [ index]
  (*arr).data[index] = value;
  // Will added +1 to arr.size
  (*arr).size++;
  return 0;
}

unsigned int array_list_remove_from(array_list_int * arr, int index){
  return array_list_size(arr);
}

unsigned int array_list_capacity(array_list_int * arr){
  return (*arr).capacity;
}

double array_list_percent_occupied(array_list_int * arr){
  return ((double)(*arr).size / (double)(*arr).capacity)  ;
}

void array_list_destroy(array_list_int * arr){
  free(arr);
}