// Exercicio 29

// Escreva um programa que, dado um numero natural n, verifique se ele é um palindromo. Um número natural é considerado
// palindromo quando a sequencia de seus algarismos é a mesma quando lida da esquerda para direita e da direita para a esquerda.
// Isso significa que o primeiro algarismo deve ser igual ao ultimo, o segundo igual ao penultimo, e assim por diante.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, // numero dado pelo user
    inv_n, // o numero invertido
    dig, // guarda os digitos
  
    printf("Digite o numero: ");
    scanf("%d", &n);
    
    int x = n; // usado para calcular n sem alterar o valor original so para poder comparar o valor na impressao do resultado (printf)
        
    while(x > 0){
       dig = x %10; // pegando o resto da divisao eu tenho o ultimo digito
       // ex 122 mod10 = 2
       inv_n = (inv_n * 10) + dig; // transformo os digitos recebidos no n_inv
       // ex 122, 
       // dig 1 = 2; inv_n = (0 * 10) + 2 = 2
       // dig 2 = 2; inv_n = (2 * 10) + 2 = 22
       // dig 3 = 1; inv_n = (22 * 10) + 1 = 220 + 1 = 221
       x = x / 10;
       // isso vai diminuir o numero, para ter assim a unidade, dezena, centena... tudo depende do quao grande o numero eh
    }
    
    if (inv_n == n) {
        printf("%d eh palindromo", inv_n);
    } else {
        printf("%d nao eh palindromo pois seu inverso eh: %d", n, inv_n);
    } return EXIT_SUCCESS;
}
