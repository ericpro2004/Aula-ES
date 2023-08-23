#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct no {
    int numero;
    struct no *anterior;
    struct no *proximo;
};

struct no *cabeca = NULL;

void inserir(int numero){
    setlocale(LC_ALL, "");

    struct no *novoNo = (struct no *) malloc(sizeof(struct no));
    novoNo -> numero = numero;
    novoNo -> anterior = NULL;
    novoNo -> proximo = NULL;

    if (cabeca == NULL){
            //Caso fácil, a lista está vazia.
        cabeca = novoNo;
    } else {
        //Caso difícil Lista não está vazia.
        struct no *ponteiro = cabeca;

        // Procura o ultimo no da lista
    while (ponteiro -> proximo != NULL){
            ponteiro = ponteiro -> proximo;
    }
        // Executa os apontamentos
        ponteiro -> proximo = novoNo;
        novoNo -> anterior = ponteiro;
    }
}

void imprimir(){
    setlocale(LC_ALL, "");
        struct no *ponteiro = cabeca;

        while (ponteiro != NULL){
            printf("%d\n", ponteiro -> numero);
            ponteiro = ponteiro -> proximo;
        }
        printf("======================\n");
}

void excluir(int numero) {
    setlocale(LC_ALL, "");
    if (cabeca != NULL) { // não vazia
        struct no *ponteiro = cabeca;
    while (ponteiro != NULL) {
        if (ponteiro -> numero == numero) { // Força a exclusão
            if (ponteiro -> anterior == NULL) {
            cabeca = cabeca -> proximo;
            if (cabeca != NULL) {
                cabeca -> anterior = NULL;
            }
            free(ponteiro);
            ponteiro = cabeca;
            } else if (ponteiro -> proximo == NULL) {
                struct no *temp = ponteiro;
                ponteiro = ponteiro -> anterior;
                ponteiro -> proximo = NULL;
                free(temp);
            } else {

                struct no *temp = ponteiro;
                ponteiro = ponteiro -> anterior;
                temp -> anterior -> proximo = temp -> proximo;
                temp -> proximo -> anterior = temp -> anterior;
                free(temp);
            }
        }
        if (ponteiro != NULL) {
            ponteiro = ponteiro -> proximo;
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
    inserir(1);
    excluir(5);
    excluir(3);
    imprimir();
}
