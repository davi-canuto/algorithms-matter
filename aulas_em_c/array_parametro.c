#include <stdio.h>

int maiorElemento(int a[], int size){
  int i, bigger = a[0];
  for( i=1; i<size; ++i){
    if(a[i]>bigger)
      bigger = a[i];
  }
  return bigger;
}

int indiceMaiorElemento(int a[], int size){
  int i, ind_bigger=0;
  for(i=1; i<size; ++i) {
    if (a[i]>a[ind_bigger]){
      ind_bigger = i;
    }
  }
  return ind_bigger;
}

void trocaElementos(int a[], int t1, int t2){
  int aux = a[t1];
  a[t1]= a[t2];
  a[t2]= aux;
}

int main(){
  int i, size;
  scanf("%d", &size);
  int a[size];
  for( i=0; i<size; ++i){
    scanf("%d", &a[i]);
  }

  printf("Maior elemento %d\n", maiorElemento(a, size));
  return 0;
}