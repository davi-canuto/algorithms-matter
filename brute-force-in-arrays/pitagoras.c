#include <stdio.h>

int pitagoras(int a, int b, int c){
  int res_a, res_b, res_c;
  res_a = a*a;
  res_b = b*b;
  res_c = c*c;

  if(res_a == res_b + res_c){
    return 1;
  }
  if(res_b == res_a + res_c){
    return 1;
  }
  if(res_c == res_a + res_b){
    return 1;
  }
  return 0;
}


int main(){
  int n, i, num, j, t, n1, n2;
  printf("Digite o tamanho do array: ");
  scanf("%d", &n);
  if(n<3){
    printf("Tamanho inválido, digite um array que tenha mais de 3 elementos");
    return 0;
  }
  int arr[n];
  for(i=0;i<n;++i){
    printf("Digite o número que irá no indice %d do array: ",i);
    scanf("%d",&num);
    arr[i] = num;
  }
  int res = 0;

  for(j=0; j<n; ++j){
    n1 = arr[j];
    n2 = arr[j+1];
    for(t=j+2; t<n; ++t){
      if(pitagoras(n1,n2,arr[t]) == 1){
        ++res;
        break;
      }
    }
  }

  if(res>0){
    printf("Existe um triangulo retangulo no array");
  }else{
    printf("Não existe um triangulo retangulo no array");
  }

  return 0;
}