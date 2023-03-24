#include <stdio.h>

struct Pessoa {
    char nome[200];
    int idade;
    char sexo[1];
    float peso;
};

int main() {

    struct Pessoa pessoa;

    printf("Digite o nome da pessoa: ");
    gets(pessoa.nome);

    printf("Digite o sexo da pessoa: ");
    gets(pessoa.sexo);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa.idade);

    printf("Digite o peso da pessoa: ");
    scanf("%f", &pessoa.peso);

    printf("Nome -> %s", pessoa.nome);
    printf("\nIdade -> %d", pessoa.idade);
    printf("\nSexo -> %s", pessoa.sexo);
    printf("\nPeso -> %f", pessoa.peso);

    getchar();
    getchar();

    return 0;
}