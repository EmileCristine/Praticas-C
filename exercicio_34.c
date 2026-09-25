// Um número a é uma permutação de um número b se os dígitos de a formarem
// uma permutação dos dígitos de b. Por exemplo, 5312434 é uma permutação
// de 4321445, mas não é uma permutação de 4312455.

// (a) Escreva uma função contadigitos que recebe como parâmetros um inteiro
// n e um dígito k (0 < k < 9) e retorne quantas vezes o dígito k aparece em n.

// (b) Usando a função do item anterior, escreva um programa que, dados dois 
//inteiros positivos a e b, determine se a é uma permutação de b. O programa 
//deve imprimir sim se a for permutação de b ou não caso contrário.

// EXERCICO 34

#include <stdio.h>
#include <stdlib.h>

int contadigitos(int n, int k) {
    int i = 0;
    while (n > 0) {
        if (n % 10 == k) { // verifica se o último dígito é igual a k
            i++;
        }
        n /= 10; // remove o último dígito de n para continuar a verificar
    }
    return i;
}

int main () {
    int a, b, k, qtdDig_a, qtdDig_b;

    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &a, &b);

    printf("%d eh permutacao de %d? ", a, b);

    int permutacao = 1; // assume que a é uma permutação de b
    k = 0;
    while (k <= 9 && permutacao) { // tem a chamada de permutacao depos do && para que o loop pare se já ver que não é permutação
        qtdDig_a = contadigitos(a, k); // conta quantas vezes o dígito k aparece em a
        qtdDig_b = contadigitos(b, k); // conta quantas vezes o dígito k aparece em b
        if (qtdDig_a != qtdDig_b) { 
            permutacao = 0; // se a quantidade de algum dígito for diferente, a não é permutação de b
        }
        k++;
    }

    if(permutacao == 1) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }

    return EXIT_SUCCESS;
}