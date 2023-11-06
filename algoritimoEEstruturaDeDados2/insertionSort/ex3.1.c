#include <stdio.h>

int main() {
    int vetor[5] = {5,7,1,3,8};
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
    
    printf("Vetor ordenado em ordem crescente: ");
    for (a = 0; a < 5; a++) {
        printf("%d ", vetor[a]);
    }
    
    getchar();
    getchar();
    return 0;
}