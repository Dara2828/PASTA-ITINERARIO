#include <stdio.h> 
 
int main() { 
    float a, b, c, maior; 
    printf("Digite as tres distancias: "); 
    scanf("%f %f %f", &a, &b, &c); 
 
    maior = a; 
    if (b > maior) maior = b; 
    if (c > maior) maior = c; 
 
    printf("Maior distancia: %.2f\n", maior); 
 
    return 0; 
} 
