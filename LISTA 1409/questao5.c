#include <stdio.h>
void busca_vetor() {
    int vetor[10], x, encontrado = 0;
    for(int i=0; i<10; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero a buscar: ");
    scanf("%d", &x);
    for(int i=0; i<10; i++) {
        if(vetor[i] == x) {
            encontrado = 1;
            break;
        }
    }
    if(encontrado) printf("Numero encontrado!\n");
    else printf("Numero nao encontrado!\n");
}
