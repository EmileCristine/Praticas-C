// a b c tal que a^2 = b^2 + c^2

//dado um n positivo, determine todas as triplas pitagoricas com a b c sejam <=n
// ex n = 15, tripla de 12, 13, 14

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ehTPitagorica(int a, int b, int c){
    return (a * a + b * b == c * c);
}

int main () {
    int n, a, b, c, i = 0;

    a = 1;
    b = 1;
    c = 1;

    printf("Digite o n: ");
    scanf("%d", &n);

    while (a <= n) {
        b = a;
        while (b <= n) {
            c = b;
            while (c <= n) {
                if(ehTPitagorica(a, b, c)){
                    printf("Tripla: %d %d %d -> ", a,b,c);
                    printf("%d^2 + %d^2 = %d^2 \n", a, b, c);
                }
                c++;
            } 
            b++;
        }
        a++;
    } 
    

}