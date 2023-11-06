#include <stdio.h>

int main() {
    int vetor[5] = {10, 25, 9, 3, 1};
    int a, b, c;

    for (a = 1; a < 5; a++) {
        c = vetor[a];
        b = a - 1;
        while (b >= 0 && vetor[b] > c) {
            vetor[b + 1] = vetor[b];
            b = b - 1;
        }
        vetor[b + 1] = c;
    }
    printf("Vetor: ");
    for (a = 0; a < 5; a++) {
        printf(" %d,", vetor[a]);
    }
    
    printf("\nO segundo menor numero: %d",vetor[1]);
    
    getchar();
    getchar();
    return 0;
}

