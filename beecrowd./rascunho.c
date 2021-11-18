#include <stdio.h>

/*int main(void){
  int t1,t2,t3,t4,div;
  scanf("%d %d %d %d",&t1,&t2,&t3,&t4);
  div = t1+t2+t3+t4;
  printf("%d\n",div-3);
  return 0;
}    URI 1930*/

/* int main(){
  int c,n,end;
  scanf("%d %d",&c,&n);
  end = c%n;
  printf("%d\n",end);
  return 0;
}    URI 2416*/

/*int main(){
  int x;
  scanf("%d",&x);
  if (x%2 == 0){
    printf("%d\n",x+2);
  }
  else{
    printf("%d\n",x+1);
  }
  return 0;
}    URI 2679*/

/*int main(){
  int ca,ba,pa,cr,br,pr;
  scanf("%d %d %d %d %d %d",&ca,&ba,&pa,&cr,&br,&pr);
  int calc1,calc2,calc3,calc;
  calc1=0;
  calc2=0;
  calc3=0;
  if (cr<=ca && br<=ba && pr<=pa){
    calc = 0;
  }
  else{
    if (cr<=ca){
      calc1=0;
    }
    else{
      calc1 = cr-ca;
    }
    if (br<=ba){
      calc2 = 0;
    }
    else{
      calc2 = br-ba;
    }
    if (pr<=pa){
      calc3=0;
    }
    else{
      calc3 = pr-pa;
    }
  }
  int soma;
  soma = (calc1+calc2+calc3);
  printf("%d\n",soma);
  return 0;
}    URI 2702*/

/*int main(){
  int a,b,x;
  scanf("%d %d",&a,&b);
  x = a+b;
  printf("X = %d\n",x);
  return 0;
}    URI 1001*/

/*int main(){
  double n1,n2,media;
  scanf ("%lf %lf",&n1,&n2);
  media = (n1*3.5+n2*7.5)/11;
  printf("MEDIA = %.5lf\n",media);

  return 0;
}    URI 1005*/

/*int main(){
  int l,d,k,p;
  scanf("%d %d %d %d",&l,&d,&k,&p);

  int cost = l*k;
  int toll = l/d;
  int toll_cost = toll*p;
  int total_cost = toll_cost+cost;

  printf("%d\n",total_cost);
  return 0;
}    URI 2377*/

/*int main() {
    long nUm, inverso = 0, manter, lembrar;
    scanf( "%ld", &nUm );
    manter = nUm;

    for ( ; nUm > 0; ) {

        lembrar = nUm % 10;
        inverso = inverso * 10 + lembrar;
        nUm /= 10;
    }
    printf( "%ld\n", inverso );

    return 0;
}    URI 1984*/
