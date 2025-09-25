#include <stdio.h> 
int main() { 
  double A = 4.0, B = 3.0, C = 5.0; 
  double areaQuadrado = A * A; 
  double areaTriangulo = (A * B) / 2.0; 
  double areaTrapezio = ((A + B) * C) / 2.0; 
  printf("A = %.2lf, B = %.2lf, C = %.2lf\n", A, B, C); 
  printf("Quadrado: %.4lf\n", areaQuadrado); 
  printf("Triangulo: %.4lf\n", areaTriangulo);
  printf("Trapezio: %.4lf\n", areaTrapezio);
  return 0;
}
