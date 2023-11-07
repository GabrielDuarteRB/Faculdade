#include <iostream>

enum class Cor {
    Vermelha,
    Preta
};

struct AVP {
    AVP *esq;
    AVP *dir;
    int chave;
    int valor;
    Cor cor;
};

AVP* criar(int chave, int valor) {
    AVP* novo = new AVP;

    novo->chave = chave;
    novo->valor = valor;
    novo->cor = Cor::Vermelha;
    novo->esq = nullptr;
    novo->dir = nullptr;

    return novo;
}

int ehVermelho(AVP *A) {
    if (A == nullptr) {
        return 0;
    }

    return A->cor == Cor::Vermelha ? 1 : 0;
}

void inverterCores(AVP *A) {
    A->cor = Cor::Vermelha;
    A->esq->cor = Cor::Preta;
    A->dir->cor = Cor::Preta;
}

void rotacaoEsquerda(AVP **A) {
    AVP *x, *y;
    x = *A;
    y = x->dir;
    x->dir = y->esq;
    y->esq = x;
    y->cor = x->cor;
    x->cor = Cor::Vermelha;
    *A = y;
}

void rotacaoDireita(AVP **A) {
    AVP *x, *y;
    x = *A;
    y = x->esq;
    x->esq = y->dir;
    y->dir = x;
    y->cor = x->cor;
    x->cor = Cor::Vermelha;
    *A = y;
}

void inserir_d(AVP **A, int chave, int valor) {
    if (*A == NULL) {
        *A = criar(chave, valor);
        return;
    }

    if (chave < (*A)->chave) {
        inserir_d(&(*A)->esq, chave, valor);
    }

    if (chave > (*A)->chave) {
        inserir_d(&(*A)->dir, chave, valor);
    }

    if (ehVermelho((*A)->esq) && ehVermelho((*A)->esq->esq)) {
        rotacaoDireita(A);
    }

    if (ehVermelho((*A)->esq) && ehVermelho((*A)->dir)) {
        inverterCores(*A);
    }
}

void inserir(AVP **A, int chave, int valor) {
    inserir_d(A, chave, valor);
    (*A)->cor = Cor::Preta;
}

void imprimirOMaior(AVP *raiz) {
    AVP *aux = raiz;

    if (raiz == NULL) {
        printf("Arvore vazia!");
        return;
    }

    while(aux->dir != NULL) {
        aux = aux->dir;
    }

    printf("Chave: %d, Valor: %d, Cor: %c\n", aux->chave, aux->valor, (aux->cor == Cor::Vermelha) ? 'V' : 'P');

}

int main() {
    AVP *A = NULL;

    int numeros[] = {3, 8, 1, 2, 19, 23, 5, 78, 29, 17, 22, 100};
    int num_elementos = sizeof(numeros) / sizeof(numeros[0]);

    for (int i = 0; i < num_elementos; i++) {
        inserir(&A, numeros[i], 0);
    }

    printf("Maior numero: \n");
    imprimirOMaior(A);

    getchar();
    getchar();

    return 0;
}
