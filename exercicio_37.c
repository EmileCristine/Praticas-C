// Uma sequência de n números inteiros não nulos é dita piramidal m-alternante se é constituida por m segmentos: o primeiro com um elemento, o segundo com dois elementos
// e assim por diante até o m-ésimo, com m elementos. Além disso, os elementos de um mesmo segmento deve ser todos pares ou todos ímpares e para cada segmento, se seus 
// elementos forem todos pares, os elementos do segmento seguinte deve ser todos ímpares.

// (a) Escreva uma função bloco que recebe como parâmetro um inteiro n e lê n números inteiros do teclado, retornando um dos seguintes valores: 0, se os n números lidos 
// forem pares, 1 se os n números lidos forem ímpares e −1 se entre os n números lidos há números com paridades diferentes.

// (b) Usando a função do item anterior, escreva um programa que, dados um inteiro n > 1 e uma sequência de n números inteiros, verifica se ela é piramidal m-alternante.
// O programa deve imprimir o valor de m ou dar a resposta não.

// EXERCICO 37

int bloco(int n) {
    int count_pares = 0, count_impares = 0, num;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            count_pares++;
        } else {
            count_impares++;
        }
    }
    if (count_pares == n) {
        return 0;
    } else if (count_impares == n) {
        return 1; 
    } else {
        return -1;
    }
}

#include <stdio.h>
#include <stdlib.h>

int main () {
 int n;
    if (scanf("%d", &n) != 1 || n <= 1) {
        printf("nao\n");
        return EXIT_SUCCESS;
    }

    int m = 1;
    int total_elementos = 0;
    int paridade_anterior = -1; // -1 indica que é o primeiro bloco
    int eh_piramidal = 1;       //  controle do resultado

    while (total_elementos < n) {
        // se o próximo bloco 'm' ultrapassar o total de elementos restantes 'n - total_elementos',
        // a sequência não pode ser piramidal m-alternante exata.
        if (total_elementos + m > n) {
            //  consumir o resto dos números para o programa não ficar preso,
            // ou simplesmente marcar como inválido se garantir o fim da leitura.
            eh_piramidal = 0;
            break;
        }

        int resultado = bloco(m);

        //  se o bloco em si é válido (todos pares ou todos ímpares)
        if (resultado == -1) {
            eh_piramidal = 0;
        }
        //  se a paridade alternou em relação ao bloco anterior
        else if (paridade_anterior != -1 && resultado == paridade_anterior) {
            eh_piramidal = 0;
        }

        // att as variáveis para o próximo passo
        paridade_anterior = resultado;
        total_elementos += m;
        
        if (!eh_piramidal) {
            break;
        }
        
        m++;
    }

    // para ser piramidal m-alternante, a soma dos blocos deve ser exatamente N
    // e a flag eh_piramidal deve continuar verdadeira
    if (eh_piramidal && total_elementos == n) {
        printf("%d\n", m - 1);
    } else {
        printf("nao\n");
    }

    return EXIT_SUCCESS;
}