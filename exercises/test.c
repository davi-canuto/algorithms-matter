#include <stdio.h>
#include <stdlib.h>

struct list {
  int val;
  struct lista *next;
};

struct billet {
  struct list projectNumber;
  int code;
  float val;
  char type;
};

void *populateList(struct list *hook){
  int ite=0;
  while(hook != (struct list *)0) {
    hook->val = ite;
    ++ite;
    hook = hook->next;
  }
}

struct list *searchProject(struct list *hook, int n){
  while(hook != (struct list *)0){
    if(hook->val == n){
      return hook;
    } else {
      hook = hook->next;
    }
  }
  return (struct list *)0;
}

int main(void){
  void *populateList(struct list *hook);
  struct list *searchProject(struct list *hook, int n);
  int getProjectRevenue(int value, int type, struct list *project);
  int getProjectCost(int value, int type, struct list *project);

  struct list pj0, pj1, pj2, pj3, pj4, pj5, pj6, pj7, pj8, pj9;
  struct list *project, *result, *hook = &pj0;
  int ite = 0;

  pj0.next = &pj1;
  pj1.next = &pj2;
  pj2.next = &pj3;
  pj3.next = &pj4;
  pj4.next = &pj5;
  pj5.next = &pj6;
  pj6.next = &pj7;
  pj7.next = &pj8;
  pj8.next = &pj9;
  pj9.next = 0;
  populateList(hook);

  printf("digite o número do projeto: \n");
  int projectNumber;
  scanf("%i", &projectNumber);

  printf("digite o valor do projeto: \n");
  int inputValue;
  scanf("%i", &inputValue);

  printf("digite o tipo do projeto: \n");
  int inputType;
  scanf("%i", &inputType);

  project = searchProject(hook, projectNumber);

  int getProjectRevenue();
  int getProjectCost();

  return 0;
}


// struct list *printList(struct list *pList){
//   while(pList != (struct list *)0){
//     printf("%i\n", pList->val);
//     pList = pList->next;
//   }
// }