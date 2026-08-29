// Nome: Emile Cristine Gomes Nogueira
// RA: 26892562

#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    int soma = 0; 

    printf("Digite o valor de a e b: \n");
    scanf("%d %d", &a, &b);

    // esse for vai percorrer o intervalo de a ate b
    for(int i = a; i <= b; i++){ // i = a é onde inicia o intervalo;
                                // b eh o limite de numeros que o for vai considerar e
                               // i++ incrementa mais 1 a sequencia ate atigir o limite definido
        // condicional para selecionar os numeros impares
        if(i % 2 != 0) {
            // todos os impares que se enquadrarem na condicao sao somados
            soma += i;
        }
    }
    printf("A soma do intervalo de a e b eh: %d\n", soma);
    
    return 0;  
}
