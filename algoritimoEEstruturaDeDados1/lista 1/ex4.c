#include <stdio.h>

struct Livro {
    char isbn[10];
    char titulo[200];
    char autor[200];
    int qtdPaginas;
    float preco;
    int anoPublicacao;
};

int main() {
    struct Livro livro;

    printf("Digite o isbn do livro: ");
    gets(livro.isbn);

    printf("\nDigite o titulo do livro: ");
    gets(livro.titulo);

    printf("\nDigite o autor do livro: ");
    gets(livro.autor);

    printf("\nDigite o quantidade de paginas do livro: ");
    scanf_s("%d", &livro.qtdPaginas);

    printf("\nDigite o preco do livro: ");
    scanf_s("%f", &livro.preco);

    printf("\nDigite o ano de publicacao do livro: ");
    scanf_s("%d", &livro.anoPublicacao);


    printf("O %s foi publicado em %d e escrito pelo %s alem de possuir um isbn de %s, possuindo %d paginas e custando R$ %.2f",
           livro.titulo, livro.anoPublicacao, livro.autor, livro.isbn, livro.qtdPaginas, livro.preco
    );

    getchar();
    getchar();

    return 0;
}