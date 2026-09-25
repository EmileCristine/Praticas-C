// EXERCICIO  32

// Um matemático italiano da Idade Média modelou o crescimento da 
// população de coelhos utilizando uma sequência de números naturais, 
// que ficou conhecida como sequência de Fibonacci. Essa sequência é definida
// da seguinte forma:

// { F1 = 1
// { F2 = 1
// { Fn = Fn-1 + Fn-2 para n >=3

// Escreva um programa que, dado um número inteiro positivo n, determine o
// n-ésimo número da sequência de Fibonacci.

#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, a = 1, b = 1, posicao, i = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Digite um numero inteiro positivo.\n");
        return EXIT_FAILURE;
    } else if (n == 1) { // garante que o primeiro número da sequência seja 1
        posicao = a;
    } else if (n == 2) { // garante que o segundo número da sequência seja 1
        posicao = b;
    } else {
        while (i < n - 2) { // n - 2 porque desconsidera os dois primeiros números da sequência
            posicao = a + b; // calcula o próximo número da sequência
            b = posicao; // atualiza o valor de b para o próximo número da sequência
            a = b - a; // atualiza o valor de a para o próximo número da sequência
            i++;
        }
    }

    printf("O %d numero da sequencia de Fibonacci eh: %d\n", n, posicao);

    return EXIT_SUCCESS;
}