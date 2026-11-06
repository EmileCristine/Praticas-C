// Escreva um programa que, dado um vetor v de n números inteiros, remova todas as duplicatas, mantendo apenas a primeira ocorrência de cada elemento.

#include <stdio.h>
#include <stdlib.h>

int buscar(int v[], int n, int valor){ // funcao de busca linear (passa por todo o vetor)
    for (int i = 0; i < n; i++){
        if (*(v + i) == valor){ // aponta para o proximo end. do vetor
            return i;
        }
    }
    return -1;
}

void imprime(int v[], int n){
    for(int *i = v; i < v + n; i++)
        printf("%d ", *i);
    printf("\n");   
}

