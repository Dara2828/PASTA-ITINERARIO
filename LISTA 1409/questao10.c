#include <stdio.h>
void produto_escalar() {
    int v1[5], v2[5], produto=0;
    for(int i=0; i<5; i++) {
        printf("Digite o %dº numero do vetor1: ", i+1);
        scanf("%d", &v1[i]);
    }
    for(int i=0; i<5; i++) {
        printf("Digite o %dº numero do vetor2: ", i+1);
        scanf("%d", &v2[i]);
    }
    for(int i=0; i<5; i++) produto += v1[i] * v2[i];
    printf("Produto escalar: %d\n", produto);
}
