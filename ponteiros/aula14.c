#include <stdio.h>
void copiarString(char *copiarDaqui, char *colarAqui) {

}

int main(void){
  void copiarString(char *copiarDaqui, char *colarAqui);

  char string1[] = "arroz";
  char string2[20];

  copiarString(string1, string2);
  printf("%s", string2);

  return 0;
}