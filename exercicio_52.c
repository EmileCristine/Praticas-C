// Escreva um programa que, dado um vetor de números inteiros, verifique se o vetor é um palíndromo, ou seja, se ele pode ser lido da mesma forma da esquerda
// para a direita e da direita para a esquerda.
#include <stdio.h>
#include <stdbool.h>

void ler(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o valor do elemento %d: ", i);
        scanf("%d", &v[i]);
    }
}

void imprimir(int v[], int n){
    for(int *i = v; i < v + n; i++)
        printf("%d ", *i);
    printf("\n");   
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
    int vetor1[] = {1, 2, 3, 2, 1};
    int n1 = sizeof(vetor1) / sizeof(vetor1[0]);

    if (ehPalindromo(vetor1, n1)) {
        printf("O vetor é um palíndromo.\n");
    } else {
        printf("O vetor NÃO é um palíndromo.\n");
    }

    return 0;
}
