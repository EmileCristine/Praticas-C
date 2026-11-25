// Desenvolva uma função que receba um vetor como parâmetro e retorne a frequência (quantidade de ocorrências) de cada elemento presente nele.

#include <stdio.h> 
#include <stdlib.h>

int ler (int v[], int n) {
  for(int i = 0; i < n; i++) {
    scanf("%d", v[i]);
  }
}

int contar (int v[], int n) {
  int vet[10] = {0};

  for(int i = 0; i < n; i++) {
    if(v[i] == vet[i]) {
      vet[i]++;
    }
  }
}

int main () {
  int n;

  do {
    printf("Digite o tamanho do vetor");
    scanf("&d", n);
  } while (n <= 0);

  int *v = malloc (n * sizeof(int));

  ler(v, n);

  contar(v, n);

  free(v);

  return EXIT_SUCCESS;
}
