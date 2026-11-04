#include <stdio.h>
#include <stdlib.h>

int main () {
    int idade;
    printf("Digite sua idade (0 a 120): ");
    scanf("%d", &idade);

    while (idade <= 0 || idade >= 120) {
        printf("Nem ferrando que essa eh sua idade, digite o valor real: ");
        scanf("%d", &idade);
    }

    // ou usando o do while
    // printf("Digite sua idade (0 a 120): ");
    // do {
    //      scanf("%d", &idade);
    // } while (idade <= 0 || idade >= 120);

    if(idade < 15) {
        printf("%d anos? voce eh um bebe ainda", idade);
    } else if ( idade >= 80) {
        printf("%d anos. Vc que matou os dinossauros, nao tente me enganar", idade);
    }

    printf("Voce tem: %d anos,", idade);
    return EXIT_SUCCESS;
}