// Escreva um programa que, dado um vetor v de n números inteiros, remova todas as duplicatas, mantendo apenas a primeira ocorrência de cada elemento.

#include <stdio.h>
#include <stdlib.h>

int buscar(int v[], int n, int valor){ 
    for (int i = 0; i < n; i++){
        if (*(v + i) == valor){ 
            return i;
        }
    }
    return -1;
}

void ler(int v[], int n) {
    printf("Vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
}

void imprime(int v[], int n){
    for(int *i = v; i < v + n; i++)
        printf("%d ", *i);
    printf("\n");   
}
// le o vetor e passa o numero no indice que for igual ao outro para o fim e depois remove 1 indice no fim a cada iteração
int remove(int v[], int n) {
    int novoTamanho = 0;

    for (int i = 0; i < n; i++) {
        if (buscar(v, novoTamanho, v[i]) == -1) {
            v[novoTamanho] = v[i];
            novoTamanho++;
        }
    }
    
    return novoTamanho; 
}

int remover_iguais(int v[]), int n {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(v[i] == v[j])
                for(int k = j + 1; k < n; k++)
                    v[k -1] = v[k];
                    i--;
                    j--;

}

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n]; 

    ler(vetor, n);

    printf("\nVetor original:\n");
    imprime(vetor, n);

    int novoTamanho = remover_iguais(vetor, n);

    printf("\nVetor novo:\n");
    imprime(vetor, novoTamanho);

    return EXIT_SUCCESS;
}

