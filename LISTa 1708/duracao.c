#include <stdio.h>
int main() {
  int duracao = 3672; 
  int horas = duracao / 3600; 
  int minutos = (duracao % 3600) / 60;
  int segundos = duracao % 60; 
  printf("Duracao total: %d segundos\n", duracao); 
  printf("%02d:%02d:%02d\n", horas, minutos, segundos);
  return 0;
}
