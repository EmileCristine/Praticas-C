// Nome: Emile Cristine Gomes Nogueira
// RA: 26892562
// Exercicio 24

// Escreva um programa que, dados quatro números inteiros representando as cores 
//de quatro ferraduras, determine o número mínimo de ferraduras que precisam ser 
//substituídas para que todas tenham cores distintas. Por exemplo, para as cores
// 1, 7, 3 e 3 basta substituit 1 ferradura.

// usando comparacao, assim que uma cor igual for encontrada, basta mudar o seu valor
// add uma variavel para cores variadas, basta calcular o numero de substituicoes
// necessarias, sendo substituicoes = 4 (cores atuais) - i (contador para as variacoes)

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d;

    printf("Digite as cores das quatro ferraduras: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // primeiro o contador comeca em 4, assumindo q todas as cores sao diferentes
    int i = 4;

    // Se b for igual a a, b não é único e por isso o contador diminui, qnt menor o contador, mais substituicoes serao necessarias
    if (b == a) {
        i--;
    }
    
    // Se c for igual a a ou b, c não é único
    if (c == a || c == b) {
        i--;
    }
    
    // Se d for igual a a, b ou c, d não é único
    if (d == a || d == b || d == c) {
        i--;
    }

    // O mínimo de substituições é o total de ferraduras (4) menos as que já são únicas
    int substituicoes = 4 - i;

    printf("Numero minimo de ferraduras a substituir: %d\n", substituicoes);

    return EXIT_SUCCESS;
}
