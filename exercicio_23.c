// Exercicio 23

// Escreva um programa que dado um inteiro positivo x, determine o menor numero de
// parcelas em que x pode ser decomposto, sabendo que cada parcela deve valer
// 1, 2, 3, 4 ou 5.

// Para saber o menor valor de parcelas possiveis, precisa começar da parcela maior (5)
// o maximo de vezes

// se x = 12 -> 12/5 = 2.4, n tem como usar decimal, ent sobe para 3 parcelas que seria 5 + 5 + 2,
// com a formula de teto fica (x + 5 -1 ) / 5
// ex:  12 + 5 -> 19/5 da 3,8 ou seja... 3 (int)

#include <stdio.h>
#include <stdlib.h>

int main () {
    int x;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    int parcelas = (x + 5 - 1) / 5;

    printf("O menor numero de parcelas eh: %d\n", parcelas);

    return EXIT_SUCCESS;

}
