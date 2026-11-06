// Escreva um programa que, dado um vetor de números inteiros, verifique se o vetor é um palíndromo, ou seja, se ele pode ser lido da mesma forma da esquerda
// para a direita e da direita para a esquerda.
#include <stdio.h>
#include <stdbool.h>

//  verifica se o vetor é um palíndromo
bool ehPalindromo(int v[], int n) {
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
    
    return true; // caso o loop terminar sem diferenças é palíndromo
}

int main() {
    int vetor1[] = {1, 2, 3, 2, 1};
    int n1 = sizeof(vetor1) / sizeof(vetor1[0]);

    if (ehPalindromo(vetor1, n1)) {
        printf("O vetor é um palíndromo.\n");
    } else {
        printf("O vetor NÃO é um palíndromo.\n");
    }

    return 0;
}
