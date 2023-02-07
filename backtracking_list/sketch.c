#include <stdio.h>
#include <stdlib.h>

int main(void){
  long long int number;
  scanf("%lld", &number);
  printf("%lld\n", number % 10);
  printf("%lld\n", (number/10) % 10);
  printf("%lld\n", ((number/10)/10) % 10);
  return 0;
}
