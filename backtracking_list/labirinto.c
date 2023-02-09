#include <stdio.h>

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

int lab_bt(int lab[20][20], int l, int c, int x1, int y1, int x2, int y2){

  if (x1 < 0 || x1 >= c || y1 < 0 || y1 >= l || lab[y1][x1] == 1) return 0;

  if (x1 == x2 && y1 == y2) return 1;

  lab[y1][x1] = 1;
  if (lab_bt(lab, l, c, x1 - 1, y1, x2, y2) ||
  lab_bt(lab, l, c, x1 + 1, y1, x2, y2) ||
  lab_bt(lab, l, c, x1, y1 - 1, x2, y2) ||
  lab_bt(lab, l, c, x1, y1 + 1, x2, y2)) return 1;
  return 0;
}