#include <stdio.h>
void intercalar_vetores() {
    int v1[5], v2[5], v3[10], k=0;
    for(int i=0; i<5; i++) {
        printf("Digite o %dº numero do vetor1: ", i+1);
        scanf("%d", &v1[i]);
    }
    for(int i=0; i<5; i++) {
        printf("Digite o %dº numero do vetor2: ", i+1);
        scanf("%d", &v2[i]);
    }
    for(int i=0; i<5; i++) {
        v3[k++] = v1[i];
        v3[k++] = v2[i];
    }
    printf("Vetor intercalado: ");
    for(int i=0; i<10; i++) printf("%d ", v3[i]);
    printf("\n");
}
