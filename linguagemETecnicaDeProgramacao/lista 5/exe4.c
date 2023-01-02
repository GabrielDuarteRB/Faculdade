#include <stdio.h>

int main() {

    int vetor[3], matriz[3][3], c, l;

    for(c = 0; c < 3; c++) {
        printf("Digite um valor para adicionar no vetor: ");
        scanf_s("%d", &vetor[c]);
        for(l = 0; l < 3; l++) {
            printf("Digite um valor para linha %d e coluna %d da matriz: ", l+1, c+1);
            scanf_s("%d", &matriz[l][c]);
            matriz[l][c] = matriz[l][c] * vetor[c];
        }
    }

    for(c = 0; c < 3; c++) {
        for(l = 0; l < 3; l++) {
            printf("\nlinha %d e coluna %d: %d", l+1, c+1, matriz[l][c]);
        }
    }

    getchar();
    getchar();
    return 0;
}