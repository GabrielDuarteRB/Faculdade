#include <stdio.h>

int main() {

    float matriz[4][4], valor;
    int maiorLinha, maiorColuna, l, c;

    for(l = 0; l < 4; l++) {
        for(c = 0; c < 4; c++) {
            printf("\nDigite o valor para linha %d e a coluna %d: ", l+1, c+1);
            scanf_s("%f", &matriz[l][c]);
            if(matriz[l][c] > valor || (l == 0 && c ==0)) {
                valor = matriz[l][c];
                maiorLinha = l + 1;
                maiorColuna = c + 1;
            }
        }
    }

    for(l = 0; l < 4; l++) {
        for(c = 0; c < 4; c++) {
            printf("\nlinha %d e coluna %d: %.2f", l+1, c+1, matriz[l][c]);
        }
    }

    printf("\n O maior valor e %.2f, e esta na linha %d e coluna %d", valor, maiorLinha, maiorColuna);

    getchar();
    getchar();
    return 0;

}