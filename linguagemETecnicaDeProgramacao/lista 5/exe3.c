#include <stdio.h>

int main() {

    int matriz[3][3], c, l;

    for(c = 0; c < 3; c++) {
        for(l = 0; l < 3; l++) {
            printf("\nDigite o valor para a linha %d e para coluna %d: ", l+1, c+1);
            scanf_s("%d", &matriz[l][c]);
            matriz[l][c] = matriz[l][c] * 5;
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