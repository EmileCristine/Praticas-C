// Exercicio 25

// Escreva um programa que, dados dois inteiros não negativos a e b representando 
// as quantidades de elementos de dois conjuntos, determine duas quantidades, 
// nesta ordem. A primeira é o número máximo de pares que podem ser formados 
// tomando um elemento de cada conjunto. A segunda é o número máximo de pares   
// que podem ser formados com os elementos restantes, cada par com dois elementos de 
// um mesmo conjunto. Cada elemento pode participar de no máximo um par.

// o numero maxido de pares é determinado pelo maior conjunto, ou seja se a = 2 e b = 4
// os pares restantes serao formados pela diferenca entre o maior e o menor conjunto
// o maximo de pares formados serao 2 sobrando 2 numeros do maior conjunto (nesse caso, b)


#include <stdio.h>
#include <stdlib.h>

int main () {
    int a, b;

    printf("Digite as quantidades dos elementos dos conjuntos a e b: ");
    scanf("%d %d", &a, &b);
    
    int pares, resto;

    if (a < b) {
        pares = a;
        resto = b - a;
    } else {
        pares = b;
        resto = a -b;
    }

    int paresRestantes = resto / 2;

    printf("Serao formados %d pares e sobraram %d numeros que formam %d pare(s)\n", pares, resto, paresRestantes);

    return EXIT_SUCCESS;

}
