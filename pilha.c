#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

void constroi_pilha(int capacidade, pilha *p) {
    p->topo = 0;
    p->dados = (int *)malloc(capacidade * sizeof(int));
    p->capacidade = capacidade;
}

int esta_vazia(pilha *p) {
    return p->topo == 0;
}

int esta_cheia(pilha *p) {
    return p->topo == p->capacidade;
}

void push(int i, pilha *p) {
    p->dados[p->topo] = i;
    p->topo++;
}

int pop(pilha *p) {
    p->topo--;
    return p->dados[p->topo];
}

int peek(pilha *p) {
    return p->dados[p->topo - 1];
}

void mostra_pilha(pilha *p) {
    int i;
    if (esta_vazia(p))
        printf("pilha vazia");
    else {
        for (i = p->topo - 1; i >= 0; i--)
            printf("%d ", p->dados[i]);
    }
    printf("\n");
}