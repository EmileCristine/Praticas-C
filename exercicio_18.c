// Nome: Emile Cristine Gomes Nogueira
// RA: 26892562
// Exercicio 18

// Escreva um programa que dados três inteiros positivos a, b e c, determine o maior valor que pode
// ser obtido colocando um operador entre a e b e outro entre + e *, podendo os dois ser iguais, 
// e é permitido usar parenteses. A ordem dos números não pode ser alterada

// a + b + c 
// a * b * c
// (a + b) * c 
// a * (b + c)

#include <stdio.h>
#include <stdlib.h>

int main () {
    int a, b, c;

    printf("Digite o valor de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a < 0 || b < 0 || c < 0) {
        printf("Os valores não podem ser negativos!");
        return EXIT_FAILURE;
    }

    int op1 = a + b + c;
    int op2 = a * b * c;
    int op3 = (a + b) * c;
    int op4 = a * (b + c);

    int maior = op1;
    
    if (op2 > maior) maior = op2;
    if (op3 > maior) maior = op3;
    if (op4 > maior) maior = op4;
    
    printf("O maior valor possível é: %d\n", maior);

    return EXIT_SUCCESS;

}
