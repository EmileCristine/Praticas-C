#include <stdio.h>
#include <stdlib.h>

int *funcao1(int v) {
    int *n; //cria ponteiro
    n = malloc(sizeof(int)); // aloca
    *n = v; // coloca o valor la
    return n;
}

void funcao2(int *x, int *y) {
    printf("funcao 2: x = %p y = %p/n", x, y);
    *x = *x + *y;
    *y = *x - *y;
}

int funcao3(int *x, int y) {
    *x = *x - y;
    y = *x * 2;

    return y;
}

int main () {
    int *p,*q, r;
    p = funcao1(4);
    q = funcao1(*p + 3);
    printf("p = %p q = %p &r = %p\n", p, q, &r);
    printf("*p = %d *q = %d\n", *p, *q);  

    r = funcao3(q, *p);
    printf("*p = %d *q = %d r = %d\n", *p, *q, r);

    funcao2(p, q);
    printf("*p = %d *q = %d r = %d\n", *p, *q, r);    

    free(q);
    q = p;
    printf("p = %p q = %p\n", p, q);
}

// com * mostra o valor, sem ele mostra o endereço

// main guarda suas variaveis em um stack, variaveis essas que sao ponteiros int *p, int *q, e int r
// Ao executar a funcao1 entra na stack por ter suas proprias variaveis "int v" = 4 e int *n
// a f1 cria um malloc "BLOCO A" e que reserva um determinado espaço no heap, depois "*n = v" aloca 4 no espaço reservado (por exemplo de 4 bites p gravar 4 em binario, que é 0100)
// ao retornar a main, a funcao um retorna o endereço de memoria no heap onde esse "4" está alocado
// agora q a funçao acabou ela sai da stack que fica livre para a proxima
// f1 é chamada dnv com *p + 3 (o valor que esta onde p aponta somado a 3) e q resulta 7, 
// depois ele faz o mesmo processo, mas agora no "BLOCO B"

// agr e a vez de funcao 3 ir para stack com int *x e int y. o x nada mais é do que "q" (o valor no endereço que q aponta) e y = 4
// ai ele altera diretamente na heap  
