#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    pilha p;
    int i = 1;
    int tamanho;
    printf("Qual o tamanho da pilha?\n");
    scanf("%d", &tamanho);
    constroi_pilha(tamanho, &p);
    mostra_pilha(&p);
    while (!esta_cheia(&p)) {
        push(i++, &p);
        mostra_pilha(&p);
    }
    while (!esta_vazia(&p)) {
        printf("%d foi desempilhado\n", pop(&p));
        mostra_pilha(&p);
    }
    return 0;
}