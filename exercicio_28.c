// EXERCICIO 29

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,  divisores, n_perfeito, i = 0;
    printf("Digite o numero: ");
    scanf("%d", n);

  while (i < n) {
    i++;

    if(n % divisores == 0) {
      printf("%d eh divisivel por %d", divisores, n);
    }
}
  return EXIT_SUCCESS;
}
