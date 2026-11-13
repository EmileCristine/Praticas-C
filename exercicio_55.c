#include <stdio.h>
#include <stdlib.h>

void ler(int v[], int n) {
    printf("Insira os valores do vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
}

void imprimir(int v[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
}

int maior_segmento(int v[], int n) {
    int maior = 0, count = 0, num = v[0];
    
    for (int i = 0; i < n; i++) {
        if (v[i] == num) {
            count++;
        } else {
            num = v[i];
            count = 1;
        }
        
        if (count > maior) {
            maior = count;
        } 
          
    }
    return maior;
}

int main(int argc, char *argv[])
{
	 int n;
	
	do {
	printf("Digite o tamanho do vetor (qtd. indices: ");
	scanf("%d", &n);
	} while (n <= 0); 
	
	int *v = (int *) malloc (n * sizeof(int));
	
	ler(v, n); 
	imprimir(v, n);
	
	printf("\nO tamanho maior segmento eh: %d", maior_segmento(v, n));
	
	free(v);
	
	return EXIT_SUCCESS;
