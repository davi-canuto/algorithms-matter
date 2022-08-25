#include <stdio.h>
#include <stdio.h>

int main(void) {
  int n, i, s;
  printf("Digite quantos elentos terá a lista de números: \n");
  scanf("%i", &n);
  int elementos[n];
  printf("Digite a soma desejada: \n");
  scanf("%i", &s);

  for ( i=0 ; i<n ; ++i){
    printf("Digite o valor que irá no elemento:%i\n", &i);
    scanf("%i", elementos[i]);
  }


  return 0;
}