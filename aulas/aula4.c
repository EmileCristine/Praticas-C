//19/08

#include <stdio.h>
#include <math.h>

int main() {
    float cat1, cat2, hip;

    printf("\nDigite o valor do cateto 1: ");
    scanf("%f", &cat1);

    printf("Digite o valor do cateto 2: ");
    scanf("%f", &cat2);

    printf("C1: %.1f e C2 %.1f", cat1, cat2);
    
    hip = sqrt(pow(cat1, 2) + pow(cat2, 2));

    printf("O valor da hipotenusa eh: %.0f \n", hip);
} 

// NOTES

    //printf("A variavel ocupa %d bytes \n\n", sizeof(a)); //sizeof serve para saber quanto espaço o int ocupa, nesse caso, 4 bytes.

    // %p e &b
    //printf("A variavel esta armazenada em: %p", &a); // aponta o endereço de armazenamento da variável (valor hexadecimal).

    // dependendo da arquitetura do e complador, a quantidade de memória que os tipos precisam para serem armazenado muda
    // o uso de um ipo maior se da mais pelo risco de overflow (ultrapassar a quantidade de caracteres que uma variável consegue armazenar).

    /* int a,b;
    float c;
    double d;
    char e;
    long g;
    long long h;
    long double; */
    
    // scanf("%d\n", &a); para mais de uma atribuição scanf("%d %d \n", &a, &b);
    // Leia um inteiro e coloque no endereço de memória de "a", ou seja, o valor digitado será armazenado em &a no lugar de %d.

    // CALCULANDO O IMC

    /*
    int peso;
    float altura;

    printf("Digite o seu peso e sua altura em metros:\n");
    scanf("%d %f", &peso, &altura);
    printf("Peso: %d \nAltura: %.2f\n\n", peso, altura);// interpolação: pedaços da string vão ser substituídos por outros valores numéricos, possibilitando colocar crescente (%) no meio do print e n só no fim.
    
    float imc = peso / (pow(altura, 2)); // calcula o imc usando a biblioteca math para elevar a variavel "altura" ao quadrado

    printf("IMC: %f", imc);

    return 0;
    */