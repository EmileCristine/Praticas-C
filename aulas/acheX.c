#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, x = 1, i = 0; 

    printf("Digite o numero: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("%d nao eh uma potencia de 2\n", n);
        return EXIT_SUCCESS;
    }

    while (x < n) {  
        i++;
        x = x * 2;
    }

    if (x == n) { 
        printf("2^%d = %d\n", i, n);
    } else {
        printf("%d nao eh uma potencia de 2\n", n);
    }

    return EXIT_SUCCESS;
}
