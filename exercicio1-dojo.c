// Escreva uma função que receba vetor de números e retorne os índices de todos os mínimos locais. 
// Um número é considerado um mínimo local quando é estritamente menor que seus dois vizinhos imediatos (o elemento anterior e o próximo).

#include <stdio.h>
#include <sdlib.h>

void ler (int v[], n) {
  for (int i = 0, i < n; i++) {
    scanf("%d", v[i]);
  }

void minlocal (int v[], int n) {
  for (int i = 1; i < n; i++) {
    if (v[i - 1 > v[i] && v [i + 1] > v[i]) {
      printf("%d", v[i]);
    }
  }
}

int main() {
  int n;

  do {
    printf("Digite o tamanho do vetor: ");
    scanf("%d", n);
  } while (n <= 0);

  int v = malloc (n * sizeof(int));

  ler (v, n);
  minlocal(v, n);
  
}
