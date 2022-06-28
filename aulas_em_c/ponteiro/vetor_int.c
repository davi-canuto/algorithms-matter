#include "vetor_int.h"

int append_int(int a[], int *tamanho, int capacidade, int x){
  int sucesso = 0;
  if(*tamanho!=capacidade){
    a[(*tamanho++)]=x;
    sucesso++;
  }
  return sucesso;
}

int insert_int(int a[], int tamanho, int capacidade, int x, int ind){
  if(tamanho!=capacidade){
    int i;
    for( i=tamanho++; i>ind ; --i)
      a[i]=a[i-1];
  }
  return tamanho;
}

int remove_int(int a[], int tamanho, int capacidade, int ind){
  int i;
  for( i=ind ; i<tamanho; ++i){
    a[i]=a[i+1];
  }
  return --tamanho;
}

int find_int(int a[], int tamanho, int capacidade, int x){
  while(tamanho-- && a[tamanho]!=x);
  return tamanho;
}
