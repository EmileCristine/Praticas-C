#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, i = 0;

    scanf("%d", &n);

    do {
        i++;
        n /= 10;
    } while (n != 0);
    
    printf("%d", i);
    return EXIT_SUCCESS;
}