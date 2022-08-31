#include <stdio.h>

int main(void){
  long long number;
  int algarism;
  int search( long long n, int r);


  printf("Enter the long number: \n");
  scanf("%lld", &number);

  printf("Enter the number to search 0...9: \n");
  scanf("%i", &algarism);

  search( number, algarism );

  printf("%i show times in %lld", algarism, number);
  return 0;
}


int search( long long n, int r) {
  int rest, res = 0;

  rest = n % 10;
  if ( n > r) {
    if ( rest == r) res += 1;
    return search( n - rest, r);
  }

  return res;
}