#include <stdio.h>
int main() { 
  double distancia = 500.0;
  double combustivel = 35.5;
  double consumoMedio = distancia / combustivel; 
  printf("Distancia: %.1lf km\n", distancia);
  printf("Combustivel gasto: %.1lf litros\n", combustivel);
  printf("Consumo medio = %.3lf km/l\n", consumoMedio);
  return 0; 
}
