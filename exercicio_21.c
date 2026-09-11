// Nome: Emile Cristine Gomes Nogueira
// RA: 26892562
// Exercicio 21

// Escreva um programa que, dados três inteiros positivos m, n e p, 
// determine o número mínimo de quadrados de lado p necessários para cobrir 
// inteiramente um retângulo m x n. Os quadrados não podem ser cortados 
// e seus lados devem ser paralelos aos lados do retângulo. A região coberta
// pode ultrapassar as bordas do retângulo.

// os lados n podem ser cortados, mas podem ultrapassar as bordas dos retangulos, sendo assim,
// se um lado do retangulo mede 6 e o quadrdo tem lado 4

// 1 quadrado cobre 4 unidades de medida e sobram 2, ai preciso de mais um quadrado 
// para cobrir os 2 restantes

// encontrei uma formula para dividir o numero e arredondar para cima quando há um resto
// esta é chamada de função de teto
// qtdM = M / P e qtdN = N / P

// assim Total =  qtdM * qtdN

// para arredondar um numero tem a formula a/b = (a +b - 1) / b  ex[6/4 = (6+4 - 1)/4] -> 9/4 -> 2 (int)
//no fim a formula fica m(ou n)/p = (m(ou n) + p - 1) / p

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, p;

    printf("Digite os valores de m, n e p: ");
    scanf("%d %d %d", &m, &n, &p);


    int quad_m = (m + p - 1) / p;

    int quad_n = (n + p - 1) / p;

    int total_quad = quad_m * quad_n;

    printf("Numero minimo de quadrados: %d\n", total_quad);

    return EXIT_SUCCESS;
}
