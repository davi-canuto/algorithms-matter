#include <stdio.h>

struct lista {
  int valor;
  struct lista *proximo;
};

struct lista *procurarValor(struct lista *pLista, int valor){ // ESSA FUNÇÃO RETORNA UM ENDEREÇO DE MEMÓRIA

  while(pLista != (struct lista *)0)
    if(pLista->valor == valor){
      return(pLista);
    } else {
      pLista = pLista->proximo;
    }
    return (struct lista *)0;
}

int main(void){
  struct lista *procurarValor(struct lista *pLista, int valor);

  struct lista m1, m2, m3, m4;
  struct lista *resultado, *gancho = &m1;

  int val;

  m1.valor = 5;
  m2.valor = 10;
  m3.valor = 15;
  m4.valor = 20;

  m1.proximo = &m2;
  m2.proximo = &m3;
  m3.proximo = &m4;
  m4.proximo = 0;

  printf("Digite o valor da pesquisa: \n");
  scanf("%i", &val);

  resultado = procurarValor(gancho, val);

  if(resultado == (struct lista *)0){
    printf("resultado não encontrado\n");
  } else {
    printf("resultado: %i\n", resultado->valor);
  }

  return 0;
}