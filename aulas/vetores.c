// #include <stdio.h>
// #include <stdlib.h>

// void inserir(int *v, int *n, int tam, int valor) {
//     if (*n >= tam)
//     {
//         printf("Tamanho maximo atingido!\n");
//         return;
//     }
//     *(v + *n) = valor;
//     (*n)++;
//     return;
// }

// int buscar(int v[], int n, int valor) {
//     for (int i = 0; i < n; i++)
//     {
//         if (*(v + i) == valor)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// void imprime(int v[], int n) {
//     for (int *i = v; i < v + n; i++)
//         printf("%d ", *i);
//     printf("\n");
// }

// void remover_indice(int v[], int *n, int indice) { // passa todo o velor para a direita sobrescrevendo o indice que quer remover
//     // mas tecnicamente n remove, so passa ele para o ultimo e dps ignora o ultimo indice
//     if (indice >= *n)
//     {
//         printf("Este vetor tem tamanho %d, nao existe indice %d\n", *n, indice);
//         return;
//     }
//     printf("O valor %d no indice %d foi removido!\n", v[indice], indice);
//     for (int i = indice; i < *n - 1; i++)
//     {
//         v[i] = v[i + 1];
//     }
//     (*n)--;
//     return;
// }

// void remover_valor(int v[], int *n, int valor) {
//     int indice = buscar(v, *n, valor);
//     remover_indice(v, n, indice);
// }

// int *criar(int n) {
//     int *v = malloc(n * sizeof(int));
//     return v;
// }

// void troca(int *a, int *b) {
//     int tmp = *a;
//     *a = *b;
//     *b = tmp;
// }

// void inverter(int *v, int n) {
//     int *inicial = v; 
//     int *fim = v + n - 1;

//     // 10 15 20 137 14
//     // 14 15 20 137 10
//     // 14 137 20 15 10

//     // vetor par eu sei q inverteu pois o fim é igual ao inicio
//     // vetor par indice de inicio é menor q fim 

//     // qnts trocas? Metade do vetor (impar arredonda p baixo)

//     while (inicial < fim) {
//         troca(inicial, fim);
//         inicial++;
//         fim++;
//     }


//     // for (int i = 0; i < n / 2; i++)
//     // {
//     //     troca(&v[i], &v[n - 1 - i]);
//     // }
// }

// int main(void)
// {
//     int tam;
//     int n = 0;

//     printf("Digite o tamanho do vetor: ");
//     scanf("%d", &tam);

//     int *v = criar(tam);

//     inserir(v, &n, tam, 10);
//     inserir(v, &n, tam, 15);
//     inserir(v, &n, tam, 20);
//     inserir(v, &n, tam, 137);
//     inserir(v, &n, tam, 14);
//     inserir(v, &n, tam, 25);
//     imprime(v, n);
//     imprime(v, n);
//     printf("Invertido:\n");
//     inverter(v, n);
//     imprime(v, n);
// }

// do prof, o meu ta comentado 
#include <stdio.h>

void inserir(int *v, int *n, int tam, int valor){
    if (*n >= tam){
        printf("Tamanho maximo atingido!\n");
        return;
    }
    *(v + *n) = valor;
    (*n)++;
    return;
}

int buscar(int v[], int n, int valor){
    for (int i = 0; i < n; i++){
        if (*(v + i) == valor){
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

void remover_indice(int v[], int *n, int indice){
    if (indice >= *n){
        printf("Este vetor tem tamanho %d, nao existe indice %d\n", *n, indice);
        return;
    }
    printf("O valor %d no indice %d foi removido!\n", v[indice], indice);
    for (int i = indice; i < *n-1; i++){
        v[i] = v[i + 1];
    }
    (*n)--;
    return;
}

void remover_valor(int v[], int *n, int valor){
    int indice = buscar(v, *n, valor); 
    remover_indice(v, n, indice);
}

int *criar(int n){
    int *v = malloc(n * sizeof(int));
    return v;
}

void trocar(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void inverter(int *v, int n){
    int *ini = v;
    int *fim = v + n - 1;

    while (ini < fim){
        trocar(ini, fim);
        ini++;
        fim--;
    }
}

int main(void)
{
    int tam;
    int n = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int *v = criar(tam);

    inserir(v, &n, tam, 10);
    inserir(v, &n, tam, 15);
    inserir(v, &n, tam, 20);
    inserir(v, &n, tam, 137);
    inserir(v, &n, tam, 14);
    inserir(v, &n, tam, 25);
    imprime(v, n);
    imprime(v, n);
    printf("Invertido:\n");
    inverter(v, n);
    imprime(v, n);
}
