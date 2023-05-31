#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int contar_diamantes(char *expressao) {
    pilha p;
    constroi_pilha(1000, &p);
    int count = 0;
    int i = 0;

    while (expressao[i] != '\0') {
        if (expressao[i] == '<') {
            push(1, &p);
        } else if (expressao[i] == '>') {
            if (!esta_vazia(&p)) {
                pop(&p);
                count++;  // se "<" formar um par com ">", contagem sobe.
            }
        }
        i++;   
    }

    return count;
}

int main() {
    char expressao[1000];
    printf("Digite a expressão: ");
    fgets(expressao, sizeof(expressao), stdin);

    int count = contar_diamantes(expressao);

    printf("O número de diamantes é: %d\n", count);

    return 0;
}