/* Uma matriz A de m × n números inteiros é chamada de linha-crescente quando, em cada uma de suas linhas, os elementos estão em ordem não decrescente, 
isto é, cada elemento é menor ou igual ao próximo. Neste exercício, você deverá escrever um programa que determine se uma matriz A de m × n números inteiros 
é linha-crescente.

(a) Escreva uma função com protótipo int elinhacrescente(int A[MAX][MAX], int m, int n) que recebe uma matriz A de m × n números inteiros, e retorna TRUE se A 
for linha-crescente ou FALSE caso contrário.

(b) Escreva a função main() do programa. A partir de inteiros m e n, com 0 < m, n ≤ 100, e de uma matriz A de m × n inteiros fornecidos pelo usuário, o programa 
deverá imprimir a mensagem A matriz é linha-crescente! se a matriz A for linha-crescente, ou A matriz não é linha-crescente. caso contrário. Essa função deverá 
utilizar obrigatoriamente a função do item (a), mesmo que você não a tenha implementado.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 10


void ler(int A[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}

int elinhacrescente(int A[MAX][MAX], int m, int n);

int main () {
    int n, m;

    int A[MAX][MAX];

    do {
        printf("Defina o tamanho da matriz: ");
        scanf("%d", &n);
    } while (n <= 0);

    ler(A, n);

    if(elinhacrescente(A, m, n) == 1) {
        printf("A matriz eh linha-crescente!");
    } else {
        printf("A matriz nao eh linha-crescente!");
    }

    return EXIT_SUCCESS;
}
