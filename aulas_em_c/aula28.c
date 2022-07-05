#include <stdio.h>

typedef long long ll;
typedef int i32;
typedef double nota;

i32 main(){
  ll mat;
  nota nota01,nota02;
  scanf("%lld",&mat);
  scanf("%lf %lf",&nota01, &nota02);
  printf("%lld: %lf %lf - %lf\n",mat,nota01,nota02,(nota01*2+nota02*3)/5);

  return 0;
}