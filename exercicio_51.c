// Escreva um programa que, dado um vetor v de n números inteiros, reorganize seus elementos de modo que todos os números negativos apareçam 
// antes dos positivos, mantendo a ordem relativa entre os elementos de cada grupo.

#include <stdio.h>

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

int main() {
    int vetor[] = {1, -2, 3, -1, 5, -3, 0};
    int n = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor original:   ");
    for(int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    separar_negativos(vetor, n);

    printf("Vetor organizado: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
