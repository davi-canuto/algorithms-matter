#include <stdio.h>

int main(){
  int a1,a2,a3,x,aux,aux3;
  scanf ("%d %d %d",&a1,&a2,&a3);
  x = (a2*2)+(a3*4);
  aux = (a1*2)+(a3*2);
  aux3 = (a1*4)+(a2*2);
  if (x<=aux){
    printf("%i\n",x);
  } else{
    if (aux<=aux3){
    printf("%i\n",aux);
    } else{
      if (aux3<=x){
        printf("%i\n",aux3);
      }
    }
  }
  return 0;
}