// Exercicio 19

// Escreva um programa que dado um inteiro positivo w,
// determine se w pode ser escrito como a soma de duas parcelas pares e positivas, 
// não necessariamente iguais

// o menor numero positivo par é 2, sendo assim, a menor soma de 2 parcelas 
// pares positivas é 2 + 2 = 4. A partir de 4, qualquer numero pode ser par 
// ser dividido em 2 partes, tipo: 6 = 2 + 4, 8 + 4 + 4. Numeros impares NUNCA
// podem ser formados pela soma de 2 pares.
// Sendo assim, w >= 4 e deve ser par (w % 2 == 0)

#include <stdio.h>
#include <stdlib.h>

int main () {
    int  w;

    printf("Digite w: ");
    scanf("%d", &w);

    if (w >= 4 && w % 2 == 0) {
        printf("%d Pode ser dado pela soma de 2 numeros pares.\n", w);
    } else {
        printf("%d Nao pode ser dado pela soma de 2 numeros pares.\n", w);
    }

    return EXIT_SUCCESS;
}
