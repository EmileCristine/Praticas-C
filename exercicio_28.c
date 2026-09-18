// EXERCICIO 28

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,  divisores=0, n_perfeito=0;
    printf("Digite o numero: ");
    scanf("%d", &n);
    
    divisores = n -1;
    
    while(divisores < n && divisores > 0){

       if(n%divisores == 0) {
           n_perfeito += divisores;
       }
       
       divisores--;
    }
    
    if (n_perfeito == n){
        printf("%d eh um numero perfeito.", n);
    } else {
        printf("%d nao eh perfeito", n);
    }
    
  return EXIT_SUCCESS;
}
