#include <stdio.h>

int main() {

    int vetor[10], cont, i;

    for(cont = 0; cont < 10; cont++) {
        printf("\nDigite um numero: ");
        scanf("%d", &vetor[cont]);

        for(i = 0; i < cont; i++) {
            while(vetor[i] == vetor[cont]) {
                printf("\nNumero incorreto! Digite um numero que nao tenha sido digitado: ");
                scanf("%d", &vetor[cont]);
                i = 0;
            }
        }
    }

    for(cont = 0; cont < 10; cont++) {
        printf("%d ", vetor[cont]);
    }

    getchar();
    getchar();
    return 0;

}