#include <stdio.h>

int pair_qtd(int n, int s){
  int arr[n], qtd_pairs=0, i, number_in_array, j, t;
  for(t=0; t<n; t++){
    printf("Agora digite o numero que irá para o indice %d : \n",t);
    scanf("%d", &number_in_array);
    arr[t] = number_in_array;
  }

  for(i=0; i<n; ++i){
    for(j=i+1; j<n; ++j){
      if(arr[i]+arr[j]==s){
        ++qtd_pairs;
      }
    }
  }
  return qtd_pairs;
}

int main(){
  int n, s;
  printf("Insira o tamanho do array: \n");
  scanf("%d",&n);
  printf("Insira quanto deve ser soma dos pares do array: \n");
  scanf("%d",&s);
  int res = pair_qtd(n, s);
  if(res!=0){
    printf("O array em questão tem %d pares que a soma resulta em %d",res, s);
  }else{
    printf("O array em questão não tem pares que resultam em %d",s);
  }
  return 0;
}