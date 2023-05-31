#ifndef PILHA_H
#define PILHA_H

typedef struct {
    int *dados;
    int topo;
    int capacidade;
} pilha;

void constroi_pilha(int capacidade, pilha *p);
int esta_vazia(pilha *p);
int esta_cheia(pilha *p);
void push(int i, pilha *p);
int pop(pilha *p);
int peek(pilha *p);
void mostra_pilha(pilha *p);

#endif