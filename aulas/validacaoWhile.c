#include <stdio.h>
#include <stdlib.h>

int main () {
    int numero;
    printf("Digite o numero positivo: ");
    scanf("%d", &numero);

    while (numero < 0) {
        printf("Valor invalido, digite um numero positivo: ");
        scanf("%d", &numero);
    }

    printf("Voce digitou: %d, um inteiro positivo.", numero);
    return EXIT_SUCCESS;
}