#include <stdio.h>
#include <stdlib.h>

int main(void){
  int n,s,i,sol_tam=0;
  scanf("%d %d",&n,&s);
  int a[n], sol[n];
  for ( i=0 ; i<n ; ++i)
    scanf("%d", &a[i]);
  printf("%d\n", soma_sublista_bt(a,n,s,sol,sol_tam));

  return 0;
}

int soma_sublista_bt(int a[], int tam, int soma, int sol[], int sol_tam){
  int r;
  if ( soma == 0 ){ // ACEITA
    print_sol(sol,sol_tam);
    return 1;
  }
  if (soma<0 || tam==0) return 0; // REJEITA
  sol[sol_tam++] = a[tam-1];
  r = soma_sublista_bt(a,tam-1,soma-a[tam-1],sol,sol_tam);
  --sol_tam;
  r=r||soma_sublista_bt(a,tam-1,soma,sol,sol_tam);
}

void print_sol(int sol[], int sol_tam){
  int i;
  printf( "Sol: {" );
  for ( i=0 ; i<sol_tam ; ++i)
    printf("%d ", sol[i]);
  printf("}\n");
}
