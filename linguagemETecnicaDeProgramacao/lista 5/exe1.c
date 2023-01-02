#include <stdio.h>

int main() {

    float matriz1[2][3], matriz2[2][3];
    int l, c;

    for(l = 0; l < 2; l++) {
        for(c = 0; c < 3; c++) {
            printf("\n Digite o valor da linha %d e da coluna %d da primeira matriz: ", l+1, c+1);
            scanf_s("%f", &matriz1[l][c]);

            printf("\n Digite o valor da linha %d e da coluna %d da segunda matriz: ", l+1, c+1);
            scanf_s("%f", &matriz2[l][c]);
        }
    }


    for(l = 0; l < 2; l++) {
        for(c = 0; c < 3; c++)
            printf("\nSoma da linha %d e da coluna %d -> %.2f", l+1, c+1, matriz1[l][c] + matriz2[l][c]);
    }

    getchar();
    getchar();
    return 0;
}