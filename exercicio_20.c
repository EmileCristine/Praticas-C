// Nome: Emile Cristine Gomes Nogueira
// RA: 26892562
// Exercicio 20

// Escreva um programa que, dados dois números inteiros positivos m e n, 
// determine o número máximo de peças de dominó de tamanho 2 x 1 que 
// podem ser colocadas em um tabuleiro m x n. As peças podem ser giradas,
// devem cobrir exatamente duas casas cada, e não podem se sobrepor e devem ficar 
// inteiramente dentro do tabuleiro. Por exemplo, para m = 2 e n = 4 cabem 4 peças.

// Se m = 2 e n = 4, a area é 2 x 4 = 8, cabendo 4 peças 2x1


#include <stdio.h>
#include <stdlib.h>

int main () {
    int m, n;

    printf("Digite as dimensões do tabuleiro, sendo m e n: ");
    scanf("%d %d", &m, &n);

    int max = (m * n) / 2;

    printf("O número máximo de peças é: %d\n", max);

    return EXIT_SUCCESS;
   
}
