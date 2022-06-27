#include <stdio.h>

void change(int *p1, int *p2){
  int aux = *p1;
  *p1 = *p2;
  *p2 = aux;
}

int main(){
  int a,b,c;
  scanf("%d %d %d",&a, &b, &c);
  if(a>b) change(&a,&b);
  if(a>c) change(&a,&c);
  if(b>c) change(&b,&c);
  printf("%d %d %d\n",a,b,c);

  return 0;
}