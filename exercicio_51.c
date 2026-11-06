// Escreva um programa que, dado um vetor v de n números inteiros, reorganize seus elementos de modo que todos os números negativos apareçam 
// antes dos positivos, mantendo a ordem relativa entre os elementos de cada grupo.
#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void separarNegativos(int v[], int n) {
    for(int j = 0; j < n; j++) {
        int trocas = 0;

        for(int i = 0; i < n - 1; i++) {
            // Se o atual for positivo (ou zero) E o próximo for negativo, eles trocam.
            // Isso joga os negativos para a esquerda sem mudar a ordem entre eles.
            if(v[i] >= 0 && v[i+1] < 0) {
                trocar(&v[i], &v[i+1]);
                trocas++;
            }
        }
        
        if (trocas == 0) {
            break;
        }
    }
}

int main() {
    int vetor[] = {1, -2, 3, -1, 5, -3, 0};
    int n = sizeof(vetor) / sizeof(vetor[0]);

    separarNegativos(vetor, n);

    printf("Vetor organizado: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
