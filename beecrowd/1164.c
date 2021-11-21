#include <stdio.h>


int main(){
  int repititions,number,iterator=0,cont=0;

  scanf("%i",&repititions);

  while(iterator!=repititions){
    scanf("%i",&number);

    for ( int i=1 ; i != number+1 ; ++i )
    {
      if (number%i == 0){
        ++cont;
      };
    }
    if (cont==2){
      printf("%i eh primo\n",number);
    }
    if (cont>2){
      printf("%i nao eh primo\n",number);
    }
    cont=0;
    ++iterator;
  }
  return 0;
}