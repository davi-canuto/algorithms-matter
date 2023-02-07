#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void){
  int x;
  long long int number;
  scanf("%d %lld", &x, &number);
  int res = qtd_occurrences(x,number);

  printf("%d\n", res);

  return 0;
}

int qtd_occurrences(int x,long long int number){
  if (number == 0)
    return 0;
  else
    return (number % 10 == x) + qtd_occurrences(number / 10, x);
}

