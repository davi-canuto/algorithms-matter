#include <stdio.h>

/*
  LABIRINTO
  6 6

  BBBCBC
  CCBCBC
  CBBBBC
  CBCBBB
  CBBBCB
  CCCBCB
*/

int lab_bt(char lab[20][20], int l, int c, int x, int y){
  if(x<0 || y<0 || x>=c || y>=l || lab[y][x]!='B') return 0;

  if (x==c-1 && y==l-1) return 1;

  lab[y][x]='P';
  int ans = lab_bt(lab,l,c,x-1,y); // ESQUERDA
  if (!ans) ans = lab_bt(lab,l,c,x,y+1); // BAIXO
  if (!ans) ans = lab_bt(lab,l,c,x+1,y); // DIREITA
  if (!ans) ans = lab_bt(lab,l,c,x,y-1); // CIMA
  lab[y][x]='B';
  return ans;
}

int lab(char lab[20][20], int l, int c){
  return lab_bt(lab,l,c,0,0);
}


int main(void) {
  char lab1[20][20];
  int l, c, i, j, ans;
  scanf("%d %d",&l,&c);
  for( i=0; i<l; ++i)
    for( j=0; j<c; ++j)
      scanf(" %c", &lab1[i][j]);
  ans = lab(lab1,l,c);

  printf("%d\n", ans);
  return 0;
}


 /*
    BODY

  Backtracing sempre vai ter uma pré-condição para aceitar, uma para rejeitar e chamadas recursivas.

  Rejeita

  Aceita

  Fazer chamadas recursivas
 */