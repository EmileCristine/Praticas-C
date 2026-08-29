// Nome: Emile Cristine Gomes Nogueira
// RA: 26892562 

#include <stdio.h> 
#include <math.h> 

int main() { 
    int a, b; 
    printf("Digite o valor de a e b: \n"); 
    scanf("%d %d", &a, &b);

    a = a + b; 
    b = a - b; 
    a = a - b; 

    printf("A: %d B: %d\n", a, b); 
    return 0; 
}
