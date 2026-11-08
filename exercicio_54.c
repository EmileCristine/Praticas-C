// Escreva uma função com protótipo void minmax(int v[], int n, int *p, int *q) que retorne o menor e o maior de um vetor v de n números inteiros nos ponteiros *p e *q.

#include <stdio.h>
#include <stdlib.h>

void ler(int v[], int n) {
    printf("Vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
}

void imprimir(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void minmax(int v[], int n, int *p, int *q) {
    *p = v[0]; // inicializa o menor elemento com o primeiro elemento do vetor
    *q = v[0]; // inicializa o maior elemento com o primeiro elemento do vetor  
    for (int i = 1; i < n; i++) { // percorre o vetor a partir do segundo elemento
        if (v[i] < *p) {
            *p = v[i]; // atualiza o menor elemento se encontrar um valor menor
        }
        if (v[i] > *q) { // atualiza o maior elemento se encontrar um valor maior
            *q = v[i]; // atualiza o maior elemento se encontrar um valor maior
        }
    }
}

int main () {
    int n;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    int *v = malloc(n * sizeof(int));
    
    ler(v, n);
    imprimir(v, n);

    int min, max;
    minmax(v, n, &min, &max);
    printf("Menor elemento: %d\n", min);
    printf("Maior elemento: %d\n", max);

    free(v);
    
    return EXIT_SUCCESS;
}
