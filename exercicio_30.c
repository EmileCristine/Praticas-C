// EXERCICIO 30

#include <stdio.h>
#include <stdlib.h>

int main () {
  int a, b, new_b, isSub = 0;
  int divisor_a = 1;
  int temp_a;

  printf ("Digite o valor de a e b: ");
  scanf("%d %d", &a, &b);

  // primeiros precisa-se descobri o tamanho de a para saber quantos dígitos isolar em b
  // sendo assim, se a = 23, divisor_a vai virar 100
  temp_a = a;
  while (temp_a > 0) {
    divisor_a *= 10;
    temp_a /= 10;
  }

  new_b = b;

  while(new_b > 0) {    
    // Com o % o final de new_b vai ter o mesmo tamanho de 'a'
    // ex 57238 % 100 == 38
    // depois 5723 % 100 == 23
    if(new_b % divisor_a == a) {
      isSub = 1;
      break;
    }
    new_b /= 10; // anda um dígito para a esquerda
  }

  if (isSub == 1) {
    printf("A: %d eh subnumero de B:%d\n", a, b);
  } else {
    printf("A: %d nao eh subnumero de B:%d\n", a, b);
  }
  
  return EXIT_SUCCESS;
}
