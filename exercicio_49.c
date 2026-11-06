// Escreva um programa que, dados dois vetores v e w de n números inteiros, determine os elementos que aparecem em ambos os vetores.

// Escreva um programa que, dados dois vetores v e w de n números inteiros, determine os elementos que aparecem em ambos os vetores.

#include <stdio.h>
#include <stdlib.h>

void imprimir(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
}

void ler(int v[], int n) {
    printf("Digite os numeros do vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
}

// retorna a qtd de elementos comuns
// O vetor resultado[] foi criado na main e é preenchido aqui
int comparar(int v[], int w[], int resultado[], int n) {
    int k = 0; // Contar elementos em comum

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i] == w[j]) {
                
                // para evita colocar números repetidos no resultado
                int duplicado = 0;
                for (int x = 0; x < k; x++) {
                    if (resultado[x] == v[i]) {
                        duplicado = 1;
                        break;
                    }
                }
                
                if (!duplicado) {
                    resultado[k] = v[i];
                    k++;
                }
                break; //  pula para o próximo elemento de V toda vez q acha o par
            }
        }
    }
    
    return k; // Retorna apenas quantos elementos foram encontrados 
}

int main() {
    int n = 0;
    int tam_comum = 0;

    printf("Digite o tamanho do vetor (qtd. indices): ");
    scanf("%d", &n);

    int *v = malloc(n * sizeof(int));
    int *w = malloc(n * sizeof(int));
    
    // O vetor de resultado pode ter no maxi o tamanho n se todos forem iguais
    int *new_vetor = malloc(n * sizeof(int));

    printf("\n--- Vetor V ---\n");
    printf("Digite o valor do elemento %d: ", i);

    ler(v, n);

    printf("\n--- Vetor W ---\n");
    ler(w, n);

    printf("\nVetor V = ");
    imprimir(v, n);

    printf("\nVetor W = ");
    imprimir(w, n);

    // new_vetor serve p guardar os iguais
    tam_comum = comparar(v, w, new_vetor, n);

    printf("\nElementos em comum = ");
    if (tam_comum > 0) {
        imprimir(new_vetor, tam_comum); // Imprime apenas até a quantidade de comuns encontrada
    } else {
        printf("Nenhum elemento em comum.");
    }
    printf("\n");

    free(v);
    free(w);
    free(new_vetor);

    return EXIT_SUCCESS;
}
