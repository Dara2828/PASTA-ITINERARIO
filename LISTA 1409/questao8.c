#include <stdio.h>
void fibonacci() {
    int n, a=0, b=1, c;
    printf("Digite quantos termos da Fibonacci: ");
    scanf("%d", &n);
    printf("Fibonacci: %d %d ", a, b);
    for(int i=2; i<n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}
