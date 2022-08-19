#include <stdio.h>

struct lista {
  int valor;
  struct lista *proximo;
};

struct lista *procuraValor(struct lista *pLista, int valor){
  while(pLista != (struct lista *)0) {
    if(pLista->valor == valor){
      return(pLista);
    } else {
      pLista = pLista->proximo;
    }
  }
  return (struct lista *)0;
}

int main(void){

  struct lista *procuraValor(struct lista *pLista, int valor);
  struct lista m1, m2, m3;
  struct lista *resultado, *gancho = &m1;
  int valor;

  m1.valor = 5;
  m2.valor = 15;
  m3.valor = 20;

  m1.proximo = &m2;
  m2.proximo = &m3;
  m3.proximo = 0;

  printf("digite valor da pesquisa:\n");
  scanf("%i", &valor);

  resultado = procuraValor(gancho, valor);

  if(resultado == (struct lista *)0){
    printf("resultado não encontrado\n");
  } else {
    printf("resultado: %i\n", resultado->valor);
  }
  return 0;
}