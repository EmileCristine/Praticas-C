#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

// int ler(int mat[3][3], int m, int n);

int linha_igual(char mat[3][3], int linha) // sem declarar o n ou m (linhas e colunas) pq o jogo da velha tem uma matriz ja definida
{
    char anterior = mat[linha][0];

    for (int j = 0; j < 3; j++)
    {
        if (mat[linha][j] != anterior)
        { // caso encontre uma linha igual, retorna vitoria
            return FALSE;
        }
        anterior = mat[linha][j];
    }
    return TRUE;
}

int coluna_igual(char mat[3][3], int coluna)
{
    char anterior = mat[0][coluna];

    for (int i = 0; i < 3; i++)
    {
        if (mat[i][coluna] != anterior)
        {
            return FALSE;
        }
        anterior = mat[i][coluna];
    }
    return TRUE;
}

int diagonalPrimaria_igual(char mat[3][3])
{
    int anterior = mat[0][0];

    for (int i = 0; i < 3; i++)
    {
        if (mat[i][i] != anterior)
        {
            return FALSE;
        }
        anterior = mat[i][i];
    }
    return TRUE;
}

int diagonalSecundaria_igual(char mat[3][3])
{
    int anterior = mat[0][2];

    for (int i = 0; i < 3; i++)
    {
        if (mat[i][2 - i] != anterior)
        {
            return FALSE;
        }
        anterior = mat[i][i];
    }
    return TRUE;
}

// DIAGONAL 2

int main()
{
    char mat[3][3] = {
        {'X', 'O', 'X'},
        {'O', 'X', 'O'},
        {'X', 'O', 'O'},

    };

    for (int i = 0; i < 3; i++)
    {
        if (linha_igual(mat, i))
        {
            printf("Ganhou na linha %d!", i + 1);
            return TRUE;
        }
        else if (coluna_igual(mat, i))
        {
            printf("Ganhou na coluna %d!", i + 1);
            return TRUE;
        }
    }
        if (diagonalPrimaria_igual(mat)) {
            printf("Ganhou na diagonal principal!");
            return TRUE;
        }
        else if (diagonalSecundaria_igual(mat)) {
            printf("Ganhou na diagonal secundaria!");
            return TRUE;
        }

    printf("Deu velha!");
    return FALSE;
}


// LOGICA DO JOGO

// enquanto ngm ganhar dentro das 9 jogadas possiveis o jogo nao acaba
// while jogadas < 9

// Jogador X começa
// entra no while, se n houver uma igualdade, passa para o O
// if O jogador atual == x e vice versa

// matriz começa com um caracter aleatorio 
