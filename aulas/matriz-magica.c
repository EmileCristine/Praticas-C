// Programa que verifica se uma matriz é ou n mágica

// caso de teste 
//  | 2 9 4 |
//  | 7 5 3 |
//  | 6 1 8 |

#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define TRUE 1
#define FALSE 0

void ler(int A[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}

int ehMagico (int mat[MAX][MAX], int n){
    int i, j;
    int diagonal_p = 0, diagonal_s = 0;

    // Diagonal principal
    for(i = 0; i < n;i++){
        diagonal_p += mat[i][i];
    }

    // Diagonal secundaria
    j = n - 1;
    for(i = 0; i < n; i++) { // i vai de 0 a n
        diagonal_s += mat[i][j];
        j--; // j vai de n. n - 1, n 0
    }

    if(diagonal_p != diagonal_s){
        return FALSE;
    } else {
        return TRUE;
    }

    // Linhas
    for(i = 0; i < n; i++) { // i vai de 0 a n
        int soma_l = 0;
        for(j = 0; j < n; j++) { // j vai de n - 1 a 0
            soma_l += mat[i][j];
        }
        if(soma_l != diagonal_p)
            return FALSE;
    } 

    //  Colunas
    for(i = 0; i < n; i++) { // i vai de 0 a n
        int soma_c = 0;
        for(j = 0; j < n; j++) { // j vai de n - 1 a 0
            soma_c += mat[j][i];
        }
        if(soma_c != diagonal_s)
            return FALSE;
    } 


    // mat[i][i] para diagonal primaria (1 for, 1 calc)
    // mat[i][j] para diagonal secundaria i++ e j-- (2 for, 2 calc)
    // mat[i][j] para linha i++ e j ++(2 for, soma dentro do for de dentro)
    // mat[j][i] para coluna i++ e j++ (2 for, "")
      return TRUE;  
}

int main (void) {
    int mat[MAX][MAX];
    int n, i, j;

    do {
        printf("Defina o tamanho da matriz: ");
        scanf("%d", &n);
    } while (n <= 0);

    ler(mat, n);

    if(ehMagico(mat, n)){
        printf("A matriz eh magica");
    } else {
        printf("A matriz nao eh magica");
    }
    
    return EXIT_SUCCESS;
}
