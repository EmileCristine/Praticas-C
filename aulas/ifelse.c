// AULA 01 SET.
// Sobre espressôes relacionais e estruturas de seleção

#include <stdio.h>
#include <stdlib.h>

int maior (int a, int b){
    if ( a > b) {
        return a;
    } else if (a == b) {
        return -1;
    } else {
        return b;
    }
    // existe a possibilidade de apenas colocar os prints na função
}

int main () {
    int a, b;

    printf("Digite A e B: ");
    scanf("%d %d", &a, &b);

    int n_maior = maior(a, b);

    if (n_maior == -1) {
        printf ("Os numeros sao iguais");
    } else {
        printf("O maior numero eh %d", n_maior);
    }


   // return  0; // status de retorno, caso seja 0 indica que deu tudo certo. Se for 1 o windows abre o registro de logs e armazena os dados do momento em que esss programa teve um erro;
    return EXIT_SUCCESS; // basicamete o return 0, mas ajuda a deixar o codigo legivel mesmo que em troca parte da performance seja deixada de lado.
}

// Operador ternario faz uma pergunta e retorna sim ou nao, a diferenca entre if else é poder fazer isso em uma unica linha
// ex <condicao> ? true : false
// return a > b ? 1 : 0;
// util quando a "pergunta" tem apenas 2 valores
// isso é basicamente um if else
// if (a > b) {return 1;} else {return 0;}