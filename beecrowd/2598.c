#include <stdio.h>

int main(){
  int tests, av_length, radar_length,iterator=0;
  scanf("%d",&tests);

  while (tests!=iterator)
  {
    scanf("%d %d",&av_length,&radar_length);
    if (av_length%radar_length == 0){
      printf("%d\n",av_length/radar_length);
    }else{
      printf("%d\n",(av_length/radar_length)+1);
    }
    ++iterator;
  }

  return 0;
}