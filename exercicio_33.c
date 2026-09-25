// Um número inteiro positivo n pode ser o comprimento da hipotenusa de
// um triângulo retângulo com catetos inteiros se ele for a hipotenusa
// de uma terna pitagórica. Escreva um programa que, dado um número
// inteiro positivo n, determine todos os números inteiros entre 1 e n
// que são o comprimento da hipotenusa de um triângulo retângulo com
// catetos inteiros.

// EXERCICO 33

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, a, b, c;

    printf("Digite um numero : ");
    scanf("%d", &n);

    printf("\nHipotenusas entre 1 e %d:\n", n);

    c = 1;
    while (c <= n) {
        int encontrou = 0; // serve para não repetir a mesma hipotenusa na tela
        
        a = 1; // a vai voltar a ser 1 para cada nova hipotenusa 'c'
        while (a < c && encontrou == 0) {
            
            b = a; // b começa igual a a para evitar testar pares repetidos, tipo  3, 4 e 4, 3
            while (b < c) {
                
                if ((a * a + b * b) == (c * c)) {
                    printf("%d\n", c);
                    encontrou = 1; // indica que a hipotenisa foi encontrada
                    break; 
                }
                b++;
            }
            a++;
        }
        c++;
    }

    return EXIT_SUCCESS;
}
