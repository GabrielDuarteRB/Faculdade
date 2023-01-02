#include <stdio.h>

int main() {

    float altura, peso, imc;

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    imc = peso / (altura * altura);

    if(imc <= 18.5) {
        printf("peso abaixo do peso normal");
    } else if( imc <= 25 ){
        printf("peso normal");
    } else if(imc <= 30) {
        printf("peso acima do normal");
    } else {
        printf("Peso excessivo");
    }

    getchar();
    getchar();
    return 0;
}