#include <stdio.h>

int main() {
  int timer,initial_timer, mass, initial_mass;
  printf("\nDigite a massa do material: ");
  scanf("%d", &mass);
  initial_mass = mass;
  printf("\nDigite o intervalo de tempo em que material perde metade da massa: ");
  scanf("%d", &timer);
  initial_timer = timer;
  while(mass > 1) {
    mass = mass / 2;
    timer = timer + initial_timer;
  }
  printf("\nO produto de massa %d demora %d segundos para ter massa igual ou menor que 1.\n", initial_mass, timer - initial_timer);
  return 0;
}