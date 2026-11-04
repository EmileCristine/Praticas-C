#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, i = 0, div = 2;

    printf("Detector de primos.\nDigite um numero: ");
    scanf("%d", &n);

    while (div < n) {
        if (n % div == 0){
            i++;
        }
        div++;
    }

    if(i > 0) {
        printf("Esse numero nao eh primo");
    } else {
        printf("Esse eh um numero primo.");
    }
    printf("\nA quantidade e divisores de %d eh: %d", n, i + 2);

    return EXIT_SUCCESS;
}