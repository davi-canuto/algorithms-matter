#include <stdio.h>


int main(void){

  int x = 10;
  double y = 20.50;
  char z = 'a';

  int *pX = &x;
  double *pY = &y;
  char *pZ = &z;

  double soma = *pX + *pY;

  int *resultado;
  resultado = &x;

  printf("Endereço x = %i - Valor x = %i\n", pX, *pX); // endereço sem asterisco, com é igual ao valor
  printf("Endereço x = %i - Valor x = %f\n", pY, *pY); // endereço sem asterisco, com é igual ao valor
  printf("Endereço x = %i - Valor x = %c\n", pZ, *pZ); // endereço sem asterisco, com é igual ao valor

  printf("A soma de %i e %f é igual a %f\n", *pX, *pY, soma); // endereço sem asterisco, com é igual ao valor

  printf("Endereço de memória de X = %i, e o endereço de memória de resultado = %i", resultado, &x);

  return 0;
}