// Escreva uma função que receba vetor de números e retorne os índices de todos os mínimos locais. 
// Um número é considerado um mínimo local quando é estritamente menor que seus dois vizinhos imediatos (o elemento anterior e o próximo).

#include <stdio.h>
#include <stdlib.h>

void ler(int v[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
}

void minlocal(int v[], int n) {
    for (int i = 1; i < n - 1; i++) {
        if (v[i - 1] > v[i] && v[i + 1] > v[i]) {
            printf("Indice: %d\n", i);
            printf("N: %d\n", v[i]);
        }
    }
    printf("\n");
}

int main() {
    int n;
    do {
        printf("Digite o tamanho do vetor: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("Digite os elementos do vetor:\n");
    ler(v, n);

    printf("Indices dos minimos locais: ");
    minlocal(v, n);

    free(v);
    return 0;
}
