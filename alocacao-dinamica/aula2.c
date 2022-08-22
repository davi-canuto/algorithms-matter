#include <stdio.h>
#include <stdlib.h>

int main(void){

  // solicita um espaćo de memoria para o sistema e retorna um ponteiro para o espaćo de memoria solicitado.
  int *p = (int *)malloc(sizeof(int)); // faz um casting com (int *) para o resultado do malloc trazer um ponteiro do tipo inteiro que o tipo do ponteiro p.
  // passamos o tamanho de bytes pelo sizeof() que retorna a quantidade de bytes de um tipo de dado.

  *p = 1000; // atribuo 10 ao valor do enderećo de memoria utilizando um ponteiro

  if (p == NULL)
    printf("malloc nao funcionou");

    printf("%p\n", p); // mostra o enderećo de memoria que o ponteiro aponta.
  printf("%i\n", *p); // mostra o valor do endereco de memoria que o ponteiro aponta.

  return 0;
}