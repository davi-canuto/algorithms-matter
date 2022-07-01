#include <stdio.h>

int main(){
  int i;
  int a[5];
  int *p;
  for( i=0; i<5; ++i )
    a[i] = i*2+3;
  p = a;
  printf("*p = %d\n",*p);
  /* *p = a[0] = 3*/
  printf("*(p+2) = %d\n", *(p+2));
  /* *(p+2) = a[2] = 7*/

  for( i=0  ; i<5; ++i )
    printf("%d ", *p++);
  printf("\n");
  return 0;
}