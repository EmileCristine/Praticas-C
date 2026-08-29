// Nome: Emile Cristine Gomes Nogueira
// RA: 26892562

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, eq, delta;

    printf("Digite os valores de a, b e c: \n");
    scanf("%f %f %f", &a, &b, &c);

    delta = (pow(b, 2)) - (4 * a * c);

    float x1 = ((b * -1) + sqrt(delta)) / 2 * a;
    float x2 = ((b * -1) - sqrt(delta)) / 2 * a;

    printf("As raizes sao: %.1f e %.1f", x1, x2);
    return 0;
}