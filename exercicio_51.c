
// Escreva um programa que, dado um vetor de números inteiros, verifique se o vetor é um palíndromo, ou seja, se ele pode ser lido da mesma forma da esquerda
// para a direita e da direita para a esquerda.

#include <stdio.h>
#include <stdlib.h>

void trocar(int *x, int *y){
    int c = *x;
    *x = *y;
    *y = c;
}

void ordenar(int v[], int n){
    for (int i = 1; i < n; i++){
        for(int j = i; j > 0 && v[j] < v[j - 1]; j--){
            trocar(&v[i], &v[j]);
        }
    }
}



void imprimir(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
}

void ler(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o valor do elemento %d: ", i);
        scanf("%d", &v[i]);
    }
}

int main() {
    int n = 0;

    printf("Digite o tamanho do vetor (qtd. indices): ");
    scanf("%d", &n);

    int *v = malloc(n * sizeof(int));


    ler(v, n);

    printf("Vetor original:   ");
    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    ordenar(v, n);

    printf("Vetor em ordem: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    free(v);

    return 0;
}
