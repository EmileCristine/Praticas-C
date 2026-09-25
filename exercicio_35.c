// Escreva um programa que verifique se um número inteiro n ≥ 2 é um primo
// circular. Um número é considerado primo circular quando todas as rotações
// circulares de seus dígitos resultam em números primos. A rotação
// circular consiste em remover o último dígito do número e colocá-lo na
// frente. Por exemplo, o número 13 é um primo circular, pois tanto 13
// quanto 31, que é a rotação obtida ao mover o dígito 3 para o início,
// são primos. O número 1193 também é um primo circular, já que todas as
// suas rotações — 1193, 3119, 9311 e 1931 — são números primos.

// EXERCICO 35
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x, tDigitos, mult;
    bool primoCircular = true; //  assumir inicialmente que o número é primo circular

    printf("Digite o numero: ");
    scanf("%d", &n);

    // agora prexisa saber quantos dígitos o número tem e o mult necessário
    x = n;
    tDigitos = 0;
    mult = 1;
    
    while (x > 0) {
        tDigitos++;
        if (x >= 10) {
            mult *= 10; // ex, para 1193 (4 dígitos), o mult será 1000
        }
        x = x / 10;
    }

    // rotacionar e verificar se cada rotação é primo
    x = n;
    int qtd_rotacoes = 0;

    while (qtd_rotacoes < tDigitos && primoCircular == true) {
        
        // Verifica se x atual é primo
        if (x < 2) {
            primoCircular = false; // 0 e 1 não são primos
        } else {
            int divisor = 2;
            while (divisor * divisor <= x) { // (testa até a raiz quadrada de x
                if (x % divisor == 0) {
                    primoCircular = false; // Se for divisível por algum num n eh primo
                    break;
                }
                divisor++;
            }
        }

        // Faz a rotação circular do número
        //exemplo: 1193 -> 3119 -> 9311 -> 1931
        // Para isso, pega  o último dígito e o poe na frente do número, multiplicando-o pelo mult 10^(tDigitos-1) e somando o resto do número dividido por 10.
        // Pega o último dígito, multiplica pelo divisor do topo e soma com o resto do número
        int ultimo_dig = x % 10;
        int rest_num = x / 10;
        x = (ultimo_dig * mult) + rest_num; 
        
        // Exemplo 1193
        // ultimo_dig = 3
        // rest_num = 119
        // x = (3 * 1000) + 119 = 3119

        qtd_rotacoes++;
    }

    if (primoCircular == true) {
        printf("O numero %d eh um primo circular.\n", n);
    } else {
        printf("O numero %d nao eh um primo circular.\n", n);
    }

    return EXIT_SUCCESS;
}
