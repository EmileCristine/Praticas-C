// Emile Cristine Gomes Nogueira
// 26892562

// Escreva uma função int busca(int v[], int l, int r, int k) que retorne TRUE se o elemento k está presente em um vetor ordenado v ou FALSE caso contrário. 
// A função deverá dividir v em três partes e comparar k com os dois elementos separadores. A partir disso a função deve encontrar k ou decidir em qual das partes ele pode 
// estar e repetir o processo nesta parte. Como dica para a sua implementação busque inspiração no funcionamento da busca binária.

##include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int busca(int v[], int l, int r, int k) {
    while (l <= r) {
        int t1 = l + (r - l) / 3;
        int t2 = r - (r - l) / 3;

        if (v[t1] == k) {
            return TRUE;
        }
        if (v[t2] == k) {
            return TRUE;
        }

    
        if (k < v[t1]) {
            r = t1 - 1; 
        } else if (k > v[t2]) {
            l = t2 + 1; 
        } else {
            l = t1 + 1; 
            r = t2 - 1;
        }
    }
    return FALSE;
}

void trocar(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void ordenar(int v[], int n){
    int comp = 0;
    int trocas_totais = 0;
    for (int j = 0; j < n; j++){
        int trocas = 0;
        for(int i = 0; i < n - j - 1; i++){
            comp++;
            if(v[i] > v[i+1]){
                trocar(&v[i], &v[i+1]);
                trocas++;
            }
        }
        trocas_totais += trocas;
        if (trocas == 0){
            break;
        }
    }
    printf("%d Comparacoes %d Trocas\n", comp, trocas_totais);
}

void imprime(int v[], int n){
    for(int *i = v; i < v + n; i++)
        printf("%d ", *i);
    printf("\n");
}

int main(void)
{
    int k;
    int vet[] = {18, 1, 3, 5, 17, 52, 4};
    int n = sizeof(vet) / sizeof(int); 
    int l = 0, r = n - 1;

    imprime(vet, n);
    ordenar(vet, n);
    imprime(vet, n);

    printf("Digite um valor:\n");
    if (scanf("%d", &k) != 1) return EXIT_FAILURE;

    int achou = busca(vet, l, r, k);
    
    if (achou == TRUE)
        printf("%d esta no vetor\n", k);
    else
        printf("%d nao esta no vetor\n", k);
        
    return EXIT_SUCCESS;
}
