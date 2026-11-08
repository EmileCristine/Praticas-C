// Escreva um programa que obtenha o elemento majoritário de um vetor de inteiros. Um elemento majoritário é um elemento que aparece mais de n / 2 vezes.

#include <stdio.h>
#include <stdlib.h>

void imprimir(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void ler(int v[], int n) {
    printf("Vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
}

int valor_majoritario(int v[], int n) {
    int count = 0;
    int num = -1;

    for (int i = 0; i < n; i++) { // encontrar o elemento majoritário
        if (count == 0) { // se a contagem for zero, atualiza o numero e reinicia a contagem
            num = v[i]; 
            count = 1;
        } else if (v[i] == num) { // caso o elemento atual for igual ao num que esta sendo procurado incrementa a contagem
            count++;
        } else {
            count--; // mas se o elemento atual for diferente, decrementa a contagem
        }
    }

    count = 0;

    for (int i = 0; i < n; i++) { // isso analisa se o num encontrado é realmente o elemento majoritário
        if (v[i] == num) { // Conta quantas vezes o num aparece no vetor
            count++;
        }
    }

    if (count > n / 2) { // se o num aparece mais de n/2 vezes, é o elemento majoritário
        printf("O elemento majoritário é: %d\n", num);
    } else { // mas, csso contrário, não há elemento majoritário
        printf("sem elemento majoritário.\n");
    }
    return num;
}

int main () {
    int n;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    int *v = malloc(n * sizeof(int));
    
    ler(v, n);
    
    printf("Vetor: ");
    imprimir(v, n);

    valor_majoritario(v, n);
    
    free(v); 

    return 0;
}
