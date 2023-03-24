#include <stdio.h>

int ehInteiroEAdiciona() {
    int n1 = 1;

    while(n1 % 2 == 1) {
        printf("\nDigite um numero inteiro e par: ");
        scanf("%d", &n1);
    }

    return n1;
}

int somaDivisores(int n) {
    int soma = 0;
    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            soma = soma + i;
        }
    }

    printf("\nA soma dos divisores do numero %d e %d", n, soma);
    return 0;
}

int main() {
    int n[5];

    for(int i = 0; i < 5; i++) {
        printf("\nNumero %d", i+1);
        n[i] = ehInteiroEAdiciona();
    };

    for(int x = 0; x < 5; x++) {
        somaDivisores(n[x]);
    }

    getchar();
    getchar();

    return 0;
}