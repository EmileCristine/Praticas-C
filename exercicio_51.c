
// Escreva um programa que, dado um vetor de números inteiros, verifique se o vetor é um palíndromo, ou seja, se ele pode ser lido da mesma forma da esquerda
// para a direita e da direita para a esquerda.

#include <stdio.h>
#include <stdbool.h>

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

//  verifica se o vetor é um palíndromo
int ehPalindromo(int v[], int n) {
    int inicio = 0;
    int fim = n - 1;

    while (inicio < fim) {
        // ao encontrar qualquer diferença indica que não é palíndromo
        if (v[inicio] != v[fim]) {
            return false; 
        }
        inicio++; // vai da esquerda para o centro
        fim--;    // vai da direita para o centro
    }
    
    return 1; // caso o loop terminar sem diferenças é palíndromo
}

int main() {
    int *v = malloc(n * sizeof(int));
    int n1 = sizeof(v) / sizeof(v[0]);

    if (ehPalindromo(v, n1)) {
        printf("eh um palíndromo.\n");
    } else {
        printf("nao eh é um palíndromo.\n");
    }

    return 0;
}
