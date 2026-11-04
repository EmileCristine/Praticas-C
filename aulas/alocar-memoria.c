#include <stdio.h>
#include <stdlib.h>

int *criar(int valor) { // aloca um espaço de memoria, coloca um valor la dentro e retorna.
    int *p = malloc(sizeof(int));

    if (p == NULL) {
        return NULL;
    }
    *p = valor;
    return p;
}

void mostrar(int *p) {
    printf("Valor = %d (endereco %p)\n", *p, p);
}

void destruir(int *p) {
    free(p);
}

void incrementar (int *p){
    (*p)++; //parenteses pq o compilador de chilique
}

int main () {
    int *num = criar(36);
    
    mostrar(num);
    incrementar(num);
    mostrar(num);
    destruir(num);
    mostrar(num);
    incrementar(num);
    mostrar(num);
}