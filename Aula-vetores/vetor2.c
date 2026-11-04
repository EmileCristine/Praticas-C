#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// teste
// { 18, 3, 5, 1}
// loop olha para primeira posicao e a segunda [0] e [1] e compara 
// 18 > 3
// como 18 é > chama a função troca
// { 3, 18, 5, 1}
// e vai repetindo
// { 3, 5, 18, 1}
// { 3, 5, 1, 18}
// agr q o 18 foi para o fim (depois de n iterações de i), inicia a proxima iteraçao do j

void ordenar(int v[], int n) { //com bubble sort
    for(int j = 0; j < n; j++) { // passa pelo vetor
        for(int i = 0; i < n - 1; i++) { // passa pelo vetor analisando
            if(v[i] > v[i+1]){ // se o da direita for maior que o da esquerda ||
                // problema, qnd for a ultima iteracao vai da error pq o vetor vai tentar acessar um indice inexistente, por isso, "n-1"
                trocar(&v[i], &v[i+1]); // chama a função de troca
            }
        }
    }
}


int buscar(int v[], int n, int valor){ // funcao de busca linear (passa por todo o vetor)
    for (int i = 0; i < n; i++){
        if (*(v + i) == valor){ // aponta para o proximo end. do vetor
            return i;
        }
    }
    return -1;
}

void imprime(int v[], int n){
    for(int *i = v; i < v + n; i++)
        printf("%d ", *i);
    printf("\n");   
}


int main(void)
{       // Ahéeeee
    int vet[] = {18, 1, 3, 5};
    int n = sizeof(vet) / sizeof(int); // ex: vet = 4 itens, sizeof vai ser 16 | para n, 16/4 (int em 4 bytes). Assim eu sei o tamanho do vetor

    imprime(vet, n);
    ordenar(vet, n);
    imprime(vet, n);
}