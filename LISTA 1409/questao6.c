#include <stdio.h>
void fatorial() {
    int n, fat=1;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) fat *= i;
    printf("Fatorial de %d = %d\n", n, fat);
}
