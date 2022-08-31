#include <stdio.h>

int main(void){
  int n = 12432423;
  int f1(int n);
  int res = f1(n);
  printf("%i", res);
  return 0;
}

int f1(int n){
  if ( n <= 0 ) return 0;
  return (n&1) + f1(n>>1);
}
