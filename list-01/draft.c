#include <stdio.h>

int primo(long long number){
  if (number==2) return 1;
  if (number%2==0) return 0;
  for (long long i=3;i<number/2;i=i+2){
    if (number%i == 0){
      return 0;
    }
  }
  return 1;
}

int main(){
  long long n;
  scanf("%lld",&n);
  if (primo(n)){
    printf("%lld eh primo\n",n);
  } else {
    printf("%lld nao eh primo\n",n);
  }
  return 0;
}


// #include <stdio.h>

// int mdc(int num1, int num2){
//   int resto;

//   do {
//     resto = num1 % num2
//   } while (resto != 0);
// }

// int main(){
//   int a,b;
//   scanf("%d %d",&a,&b);
//   int x = mdc(a,b);
//   printf("%d",x);
// }