// Nome: Emile Cristine Gomes Nogueira
// RA: 26892562

#include <stdio.h>
#include <math.h>

int main() {
    int num, pos;

    printf("Digite a posicao que deseja encontrar: \n");
    scanf("%d", &pos);

    num = (pow(pos, 2) + pos) / 2 + 2;
    printf("O numero nessa posicao eh: %d", num);
    return 0;
}