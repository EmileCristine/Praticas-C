// Nome: Emile Cristine Gomes Nogueira
// RA: 26892562

#include <stdio.h>
#include <Math.h>

int main() {
    float x1 = 0, x2 = 0, y1 = 0, y2 = 0;

    printf("Ponto P: X e Y \n");
    scanf("%f %f", &x1, &y1);

    printf("Ponto Q: X e Y \n");
    scanf("%f %f", &x2, &y2);

    float distancia = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));

    printf("%f", distancia);

    return 0;
}