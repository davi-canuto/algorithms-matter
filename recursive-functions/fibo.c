#include <stdio.h>

int main(void) {
  unsigned long fib(unsigned long n);
  int numero, resultado;
  printf("Digite um número inteiro:");
  scanf("%i", &numero);

  resultado = fib(numero);

  printf("O fibonnaci é %i", resultado);
  return 0;
}

unsigned long fib(unsigned long n){
  if (n<2) return n;
  return fib(n-1) + fib(n-2);
}