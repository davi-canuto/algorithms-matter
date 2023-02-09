#include <stdio.h>

int main(void){
  int x;
  long long int number;
  scanf("%d %lld", &x, &number);
  int res = qtd_occurrences(x,number);

  printf("%d\n", res);

  return 0;
}

int qtd_occurrences(int x,long long int number){
  if (number == 0) return 0;

  int lastDigit = number % 10;
  int count = qtd_occurrences(x, number / 10);

  if (lastDigit == x)
       count++;

  return count;
}

