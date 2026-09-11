// Nome: Emile Cristine Gomes Nogueira
// RA: 26892562
// Exercicio 22

// Escreva um programa que, dados 3 inteiros positivos k, n e w, 
// considere w valores k, 2k, 3k..., w x k e determine quanto falta a n para atingir
// a soma desses valores, respondendo 0 caso n já seja maior ou igual a essa soma.

// para obter a soma dos termos de uma sequencia é possivel utilizar a formula da PA,
// sendo: sum = (w * (1 + w) / 2) * k

#include <stdio.h>
#include <stdlib.h>

int main () {
    int k, n, w;

    printf("Digite os valores de k, n e w: ");
    scanf("%d %d %d", &k, &n, &w);

    int sum = (w * (1 + w) / 2) * k;

    if (n >= sum) {
        printf("0\n");
    } else {
        int falta = sum - n;
        printf("Falta: %d\n", falta);
    }

    return EXIT_SUCCESS;
}
