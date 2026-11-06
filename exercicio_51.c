
// Escreva um programa que, dado um vetor de números inteiros, verifique se o vetor é um palíndromo, ou seja, se ele pode ser lido da mesma forma da esquerda
// para a direita e da direita para a esquerda.


#include <stdio.h>
#include <stdlib.h>

void separar_negativos(int v[], int n) {
    // vetor auxiliar para guardar o resultado temporariamente
    int aux[n]; // vetor auxiliar
    int posAux = 0; // posicao auxiliar

    // copia todos os números negativos na ordem em que aparecem
    for (int i = 0; i < n; i++) {
        if (v[i] < 0) {
            aux[posAux] = v[i];
            posAux++;
        }
    }

    // copia todos os números positivos (e o zero) na ordem original
    for (int i = 0; i < n; i++) {
        if (v[i] >= 0) {
            aux[posAux] = v[i];
            posAux++;
        }
    }

    // copia os elementos de volta do vetor auxiliar para o vetor original v[]
    for (int i = 0; i < n; i++) {
        v[i] = aux[i];
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
    int num = sizeof(v) / sizeof(v[0]);

    printf("Vetor original:   ");
    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    separar_negativos(v, num);

    printf("Vetor em ordem: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
