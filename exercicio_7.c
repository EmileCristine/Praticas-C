// Nome: Emile Cristine Gomes Nogueira
// RA: 26892562

#include <stdio.h>

int main() {
    int h1, h2, m1, m2;

    printf("Digite o primeiro horario no seguinte formato: HH:MM \n");
    scanf("%d:%d", &h1, &m1);

        printf("Digite o segundo horario no seguinte formato: HH:MM \n");
    scanf("%d:%d", &h2, &m2);

    h1 = (h1 * 60) + m1;
    h2 = (h2 * 60) + m2;

    int intervalo = h2 - h1;

    int interH = intervalo/60;
    int interM = intervalo%60;

    printf("O intervalo eh de: %d minuto(s)\n\n", intervalo);

    printf("%02d:%02d\n", interH, interM);
    return 0;
}