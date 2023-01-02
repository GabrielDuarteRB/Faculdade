#include <stdio.h>

int main() {

    float nota1, nota2, nota3, media, mediaMaior, mediaMenor, mediaTurma, somaMedias;
    int alunos;
    char resp;

    resp = 's';
    alunos = 0;

    while(resp != 'n') {
        alunos += 1;
        printf("Nota 1: ");
        scanf(" %f", &nota1);
        printf("Nota 2: ");
        scanf(" %f", &nota2);
        printf("Nota 3: ");
        scanf(" %f", &nota3);
        media = (nota1 + nota2 + nota3 )/3;
        if(media > mediaMaior) {
            mediaMaior = media;
        }
        if(media < mediaMenor || alunos == 1) {
            mediaMenor = media;
        }
        somaMedias = somaMedias + media;
        printf("Deseja continuar? [s/n]");
        scanf(" %c", &resp);
    }

    mediaTurma = somaMedias/alunos;
    printf("A maior media foi %.2f, a menor foi %.2f e a media da turma foi %.2f", mediaMaior, mediaMenor, mediaTurma);

    getchar();
    getchar();
    return 0;
}