// Nome: Emile Cristine Gomes Nogueira 
// RA: 26892562 

#include <stdio.h>
#include <math.h>

int main() {
    float x;
    float fx;
    
    scanf("%f", &x);
    fx = sqrt(x) + x/2 + pow(x, x);
    printf("resultado: %.1f\n", fx);
    
    return 0;
}
