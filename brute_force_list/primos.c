#include <stdio.h>

int is_cousin(int number){
  int d;
  if(number <= 1){
    return 0;
  }
  for(d = 2; d < number; d++){
    if(number%d == 0){
      return 0;
    }
  }
  return 1;
}

int cousins(int number_1, int number_2){
  if(is_cousin(number_1) && is_cousin(number_2)){
    return 1;
  }
  int bigger,smaller,res;
  if(number_1 > number_2){
    bigger = number_1;
    smaller = number_2;
  } else {
    bigger = number_2;
    smaller = number_1;
  }

  while(bigger % smaller != 0){
    res = (bigger % smaller);
    bigger = smaller;
    smaller = res;
  }

  if(smaller != 1){
    return 0;
  }
  return 1;
}

int main(){
  int n1, n2;
  printf("Digite os dois números para saber se são primos entre si:\n");
  scanf("%d %d",&n1,&n2);
  int result = cousins(n1,n2);
  if(result == 1){
    printf("Os números %d e %d são primos entre si. \n",n1, n2);
  }
  else{
    printf("Os números %d e %d não são primos entre si. \n",n1, n2);
  }
}