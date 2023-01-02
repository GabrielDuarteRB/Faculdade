#include <stdio.h>

int main() {

    char matriz[5][10], vetor[10], valor;
    int l, c, resultado[5] = {0, 0, 0, 0, 0};

    for(l = 0; l < 10; l++) {
        printf("\nGabarito da questao %d: ", l+1);
        fflush(stdin);
        scanf_s ("%c", &vetor[l]);
        while(vetor[l] != 'a' && vetor[l] != 'b' && vetor[l] != 'c' && vetor[l] != 'd') {
            printf("\nDigite apenas [a, b, c, d] para o gabarito da questao %d: ", l+1);
            fflush(stdin);
            scanf_s ("%c", &vetor[l]);
        }
    }

    for(l = 0; l < 5; l++) {
        printf("\n%dº aluno!", l+1);
        for(c = 0; c < 10; c++) {
            printf("\nResposta da %dª questao: ", c+1);
            fflush(stdin);
            scanf("%c", &matriz[l][c]);
            while(matriz[l][c] != 'a' && matriz[l][c] != 'b' && matriz[l][c] != 'c' && matriz[l][c] != 'd') {
                printf("\nDigite apenas [a, b, c, d] para a resposta da %dª questao: ", c+1);
                fflush(stdin);
                scanf_s ("%c", &matriz[l][c]);
            }
            if(matriz[l][c] == vetor[c]) {
                resultado[l]++;
            }
        }
    }

    for(c = 0; c < 5; c++) {
        printf("\nAluno %d acertou: %d", c+1, resultado[c]);
    }

    getchar();
    getchar();
    return 0;
}