// Escreva um programa que, dado um vetor de números inteiros, verifique se o vetor é um palíndromo, ou seja, se ele pode ser lido da mesma forma da esquerda
// para a direita e da direita para a esquerda.

#include <stdio.h>
#include <stdlib.h>

void imprimir(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void ler(int v[], int n) {
    printf("Vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
}

// verifica se o vetor é um palíndromo
int ehPalindromo(int v[], int n) {
    int inicio = 0;
    int fim = n - 1;
    
    while (inicio < fim) {
        // Ao encontrar qualquer numero diferente significa que o vetor não e um palíndromo
        if (v[inicio] != v[fim]) {
            return 0;
        }
        inicio++; // vai da esquerda para o centro
        fim--;   // vai da direita para o centro
    }
    return 1; // se o while terminar sem diferenças é palíndromo
}

int main() {
    int n;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    int *v = malloc(n * sizeof(int));

    ler(v, n);
    
    printf("Vetor ");
    imprimir(v, n);

    if (ehPalindromo(v, n)) {
        printf("Eh um palindromo.\n");
    } else {
        printf("Nao eh um palindromo.\n");
    }
    
    free(v); 

    return 0;
}
