#include <stdio.h>

int ordenado(int arr[], int t){
  int i, ordenado = 1;
  for(i=1 ; i<t; ++i){
    if(arr[i-1]>arr[i]){
      ordenado=0;
      break;
    }
  }
  return ordenado;
}

int selecao(int arr[], int t){
  int i, j, min, aux;
  for(i=0; i<t; ++i){
    min = i;
    for(j=(i+1); j<t ; ++j){
      if(arr[j]< arr[min]){
        min = j;
      }
    }
    aux = arr[i];
    arr[i] = arr[min];
    arr[min] = aux;
  }

  for(i=0; i<t; i++){
    printf("Array indice %d é igual a %d\n",i, arr[i]);
  }
  return 1;
}

int main(){
  int n, k, num;
  printf("Digite o tamanho do seu array: ");
  scanf("%d", &n);
  int array[n];
  for(k=0; k<n ; k++){
    printf("Digite o número que irá no indice %d do array: ",k);
    scanf("%d",&num);
    array[k] = num;
  }
  int res_ordenado = ordenado(array, n);
  if (res_ordenado == 0){
    selecao(array, n);
  }
  else {
    printf("O array está ordenado.");
  }
  return 0;
}