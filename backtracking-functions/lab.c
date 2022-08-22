#include <stdio.h>

int main(void){
  char lab[20][20];
  int l,c,i,j,ans;
  scanf("%d %d",&l,&c);
  for ( i=0; i<l ;++i )
    for ( j=0; j<c; ++j)
      scanf("%c",&lab[i][j]);

  ans = sol_lab(lab, l, c);
  printf("%d",ans);
  return 0;
}

int sol_lab(char lab[20][20],int l,int c){
  return lab_backtracking(lab,l,c,0,0);
}

int lab_backtracking(char lab[20][20], int l, int c, int x, int y){
  // Rejeita
  if (x < 0 || y < 0 || x>=c || y>=l || lab[y][x] != 'B' ) return 0;
  // Aceita
  if (x==c-1 && y==l-1) return 1;

  // CHAMADA RECURSIVA

  // ESQUERDA
  int ans = lab_backtracking(lab, l, c, x-1, y);
  // BAIXO
  if ( !ans )
    ans = lab_backtracking(lab, l, c, x, y+1);
  // DIREITA
  if ( !ans )
    ans = lab_backtracking(lab, l, c, x+1, y);
  // CIMA
  if ( !ans )
    ans = lab_backtracking(lab, l, c, x, y-1);
  return ans;
}
