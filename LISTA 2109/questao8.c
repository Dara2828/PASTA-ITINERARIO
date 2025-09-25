#include <stdio.h>
int contar(int matriz[4][4], int numero) {
    int cont = 0;
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            if (matriz[i][j] == numero) cont++;
        }
    }
    return cont;
}
int main() {
    int matriz[4][4] = {{1,2,3,4},{5,6,7,8},{1,2,3,4},{5,1,1,8}};
    int numero;
    printf("Digite o numero a procurar: ");
    scanf("%d", &numero);
    printf("O numero %d aparece %d vezes.\n", numero, contar(matriz, numero));
    return 0;
    
}
