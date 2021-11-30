#include <stdio.h>

int mdc(int num1, int num2){
  int resto;
  while (num2 != 0){
    resto = num1 % num2;
    num1 = num2;
    num2 = resto;
  }
  printf("%d\n",num1);
}

int main(){
  int tests, f1,f2;
  scanf("%d",&tests);
  while (tests != 0 )
  {
    scanf("%d %d",&f1,&f2);
    mdc(f1,f2);
    tests = tests-1;
  }
  
  return 0;
}