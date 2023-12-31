#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct no {
    int numero;
    struct no *proximo;
    struct no *anterior;
};

struct no *cabeca;

void inserir(int numero){
    setlocale(LC_ALL, "");
    struct no *novoNo = (struct no *) malloc(sizeof(struct no));
    novoNo -> numero = numero;
    novoNo -> proximo = cabeca;

    if (cabeca == NULL){
        cabeca = novoNo;
    } else {
        struct no *ponteiro = cabeca;
        while (ponteiro -> proximo != cabeca){
            ponteiro = ponteiro -> proximo;
        }
        ponteiro -> proximo = novoNo;
    }
}

void imprimir(){
    setlocale(LC_ALL, "");

     struct no *ponteiro = cabeca;

        while (1){
            if (ponteiro != NULL) {
                printf("%d\n", ponteiro -> numero);
                ponteiro = ponteiro -> proximo;

                if (ponteiro == cabeca) {
                break;
                }
            }
        }
        printf("======================\n");
}

void excluir(int numero) {
    setlocale(LC_ALL, "");

        if (cabeca != NULL) {
            if (cabeca -> numero == numero) {
                if (cabeca -> proximo == cabeca) {
                    free(cabeca);
                    cabeca = NULL;
                } else if {
                        struct no *ponteiroExcluir = cabeca;
                        cabeca = cabeca -> proximo;

                        struct no *ponteiroAnterior = cabeca;

                        while (ponteiroAnterior -> proximo != ponteiroExcluir) {
                        ponteiroAnterior = ponteiroAnterior -> proximo;

                        ponteiroAnterior -> proximo = cabeca;
                        free (ponteiroExcluir);
                    }
                } else {
                    struct no *ponteiroAnterior = cabeca;

                    while ((ponteiroAnterior -> proximo != cabeca) && (ponteiroAnterior -> proximo -> numero != numero)) {
                        ponteiroAnterior = ponteiroAnterior -> proximo;
                    }

                if (ponteiroAnterior -> proximo != cabeca) {
                    struct no *ponteiroExcluir = ponteiroAnterior -> proximo;
                    ponteiroAnterior -> proximo = ponteiroExcluir -> proximo;
                    free(ponteiroExcluir);
            }
        }
    }
}

int main(){

    excluir(1);
    imprimir();

    inserir(1);
    excluir(1);
    imprimir();

    inserir(1);
    inserir(2);
    inserir(3);
    inserir(4);
    inserir(5);
    excluir(1);
    excluir(5);
    excluir(3);
    imprimir();


}
