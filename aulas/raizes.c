// Exemplo 2 da aula 01 SET

// Eq. de segundo grau
// Regras
// -b +- sqrt(delta) / 2 * a
// a != 0
// delta < 0 -> n tem raizes reais
// delta > - -> duas raizes distintas
// delta = 0 -> duas raizes iguais 

#include <stdio.h>
#include <stdlib.h>

int delta (int a, int b, int c) {
    int valor = b *b - 4 * a * c;
    
    if (valor < 0) {
        printf("O valor de delta eh menor que 0, nao existem raizes reais.");
        exit(EXIT_FAILURE); // usar o return apenas faria com que o processo saisse da funcao, o exit obriga a sair de tudo, terminando assim o processo.
    }  else if (delta == 0) {
        printf("Existem duas raizes iguais.\n");
    } else {
        printf("Existem duas raizes reais.\n");
    }
} 

int main () {
    int a, b, c;

    printf("Digite os coeicientes A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        printf("O coeficiente A nao pode ser igual a 0.");
        return EXIT_FAILURE;
    } 

    int v_delta = delta(a, b, c);

    printf("O valor de delta eh: %d", v_delta);

    return EXIT_SUCCESS;
}