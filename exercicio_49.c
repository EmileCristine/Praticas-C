// Escreva um programa que, dados dois vetores v e w de n números inteiros, determine os elementos que aparecem em ambos os vetores.

#include <stdio.h>
#include <stdlib.h>

void imprimir(int v[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
}
void ler(int v[], int n) {
    for(int i = 0; i < n; i++){
        printf("Digite o valor do elemento %d: ", i);
        scanf("%d", &v[i]);
    }
}

int comparar(int v[], int w[], int n) {
    int k;
    for(int j = 0; j < n; j++)
        for(int i = 0; int i < 5; i++)
            if(v[i] == v[j]){
                k++;
                new_vetor[] = v[i];
            } 

    new_vetor = malloc (k * sizeof(int));
} return *new_vetor;

int main () {
    int n = 0;
    int *v, *w;
    int *new_vetor;

    printf("Digite o tamanho do vetor (qtd. indices): ");
    scanf("%d", &n);

    v = malloc (n * sizeof(int));
    w = malloc (n * sizeof(int));

    printf("Vetor V\n");
    ler(v, n);
    printf("Vetor V\n");
    ler(w, n);

    printf("Vetor V = ");
    imprimir(v, n);
    printf("\nVetor W = ");
    imprimir(w, n);

    new_vetor = comparar(v, w, n);
    imprimir(new_vetor)

    free(v);
    free(w);
    return EXIT_SUCCESS;
}