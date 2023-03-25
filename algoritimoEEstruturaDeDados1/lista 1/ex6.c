#include <stdio.h>

typedef struct {
    float real;
    float imaginario;
} Complexo;

Complexo soma(Complexo n1, Complexo n2) {
    Complexo resultado;
    resultado.real = n1.real + n2.real;
    resultado.imaginario = n1.imaginario + n2.imaginario;
    return resultado;
}


int main() {

    Complexo n1;
    Complexo n2;
    Complexo resultado;

    printf("Digite o valor real do primeiro numero complexo: ");
    scanf("%f", &n1.real);
    printf("Digite o valor imaginario do primeiro numero complexo: ");
    scanf("%f", &n1.imaginario);
    printf("Digite o valor real do segundo numero complexo: ");
    scanf("%f", &n2.real);
    printf("Digite o valor imaginario do segundo numero complexo: ");
    scanf("%f", &n2.imaginario);

    resultado = soma(n1, n2);

    printf("A soma dos numeros complexos e: %.1f + %.1fi", resultado.real, resultado.imaginario);

    getchar();
    getchar();
    return 0;
}