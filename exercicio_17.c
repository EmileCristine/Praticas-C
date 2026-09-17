// Exercicio 17

// Escreva um programa que, dados dois inteiros positivos n e k, com k >= n, determine qual 
// número ocupa a k-ésima posição da sequência formada pelos ímpares de  1 a n em ordem crescente, 
// seguidos dos pares de 1 a n, também em ordem crescente.

#include <stdio.h>
#include <stdlib.h>

        // formula PA -> an = 1 + (k - 1) * r
        // PA IMPAR: an = 2K - 1 para os impares
        // PA PAR: an = 2 (k - (k -1) * 2) ficand0 -> 2 * (k - (n + 1) / 2)
        // pois a quantdade de impares é dada por M = (N + 1) / 2 

        // Se a posição K for maior que M, a sequencia sera par.
        // A nova posição dentro da formula dos pares será: k = k - M (representa a primeira parte da sequencia).

        // onde an é a posicao inicial (no caso dos impares é 1 e dos pares é 2)
        // r é a rezao (2 para ambos)
        // k é o k-ésimo termo

int main() {
    int n, k;
    printf("Digite o N (tamanho da sequencia) e K (posicao): ");
    scanf("%d %d", &n, &k);

    if (k > n || k < 1) {
        printf("Posicao inexistente ou K invalido para N.\n");
    } 
    else if (k <= (n + 1) / 2) {
        printf("A %d posicao eh: %d\n", k, 2 * k - 1);

    } 
    else {
        printf("A %d posicao eh: %d\n", k, 2 * (k - (n + 1) / 2));
    }

    return EXIT_SUCCESS;
}

