#include <stdio.h>

int mmc(int number_1, int number_2){
  int resto, a, b;
  a = number_1;
  b = number_2;

  do {
    resto = a % b;

    a = b;
    b = resto;

  } while(resto != 0);

  return (number_1 * number_2) / a;
}

int main(){
  int n1, n2;
  printf("Digite os dois números que queres fazer o mmc:\n");
  scanf("%d %d",&n1,&n2);
  int result = mmc(n1,n2);
  printf("%d \n",result);
}