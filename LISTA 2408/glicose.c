#include <stdio.h> 
 
int main() { 
    float glicose; 
    printf("Digite a quantidade de glicose: "); 
    scanf("%f", &glicose); 
 
    if (glicose <= 100) { 
        printf("Normal\n"); 
    } else if (glicose <= 140) { 
        printf("Elevado\n"); 
    } else { 
        printf("Diabetes\n"); 
    } 
 
    return 0; 
}
