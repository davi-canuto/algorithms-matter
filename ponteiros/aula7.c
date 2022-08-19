#include <stdio.h>

int main(void) {
  void testeVariavel(int x);
  void testePonteiro(int *pX);
  int teste = 1;
  int *pTeste = &teste;

  // testeVariavel(teste);

  testePonteiro(pTeste); //sem o * pois a funçao recebe um ponteiro que é um endereço de memória, se eu mandasse com * eu mandaria o valor no endereço de memória de pTeste

  printf("%i\n", teste);

  return 0;
}


void testeVariavel(int x){
  ++x;
}

void testePonteiro(int *pX){
  ++*pX;
}