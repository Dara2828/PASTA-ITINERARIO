#include <stdio.h>
int main() {
    int matriz[2][2];
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Matriz completa:\n");
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
