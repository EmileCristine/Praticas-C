// Nome: Emile Cristine Gomes Nogueira
// RA: 26892562

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s;

    printf("Digite os lados do triangulo: \n");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2;
    float area = sqrt(s * ((s - a) * (s - b) * (s - c)));

    printf("AREA: %.2f", area);
    return 0;
}