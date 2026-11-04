#include <stdio.h>
#include <locale.h>
#include <windows.h>

int soma(int x, int y) {
    int c;
    c = x + y;
    return c;

    // OU

    // apenas return

    // retur x = y;
}

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(65001);

    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d", soma(a, b));
}

// RESTO EX:
// 7 /3 = 2 com resto 1

// diretivas são comandos iniciados com "#"
// ex: # define PI = 3,14

// int resto_a, resto_b;

// resto_a = a % 2;
// resto_b = b % 2;

// scanf("%d %d", &a, &b);
// printf("A paridade de A eh diferente a de B? %d", resto_a != resto_b);

// printf("A eh maior que B? %d", a > b); // ao resultar 0 ou 1 ele indica se a afirmação é falsa ou verdadeira
