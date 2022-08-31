#include <stdio.h>

int main(void){
  long long number;
  int algarism;

  number = 23231426;

  algarism = 10;
  int res = number%algarism;

  printf("%ld / %i = %i", number, algarism, res);

  return 0;
}