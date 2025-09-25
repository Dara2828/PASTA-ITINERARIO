#include <stdio.h> 
 
int main() { 
    char escala; 
    float temp, convertida; 
 
    printf("Digite a escala (C/F): "); 
    scanf(" %c", &escala); 
    printf("Digite a temperatura: "); 
    scanf("%f", &temp); 
 
    if (escala == 'C' || escala == 'c') { 
        convertida = (temp * 9/5) + 32; 
        printf("Temperatura em Fahrenheit: %.2f\n", convertida); 
    } else if (escala == 'F' || escala == 'f') { 
        convertida = 5.0 * (temp - 32) / 9.0; 
        printf("Temperatura em Celsius: %.2f\n", convertida); 
    } else { 
        printf("Escala invalida.\n"); 
    } 
 
    return 0; 
