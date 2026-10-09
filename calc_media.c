// calcula a média final da materia utilizando a formula indicada pelo professor responsável.
// formula: Mf = 2 * Mp * Me / Mp + Me PARA Mp = P1 + 2P2 / 3

// Me = se um exercicio de 12 vale uns 6 exercícios, ent posso considerar a nota deles 5x maior mesmo e para a média eu calculo a porcentagem que representam perante a 10

// ATENÇÃO: ainda não é possivel descobrir como a média dos exercicio é calculada pois alguns valem 2 pontos e os desafios 12 (e tem mais de 30 exercícios em apenas metade do semestre)
// por isso eu defini essa nota como parcial, considerando o maximo que voce pode ter caso todos os exercicios recebam nota maxima conforme os requisitos de prazo.

// FEATURE FUTURA: o aluno poderá verificar quanto ainda precisa tirar para passar na matéria (média 5)
// OBS: A nota da recuperação também tem uma formula propria, a feat futura permitirá que o estudante saiba quanto precisa tirar na recuperação para passar.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

float calc_Mp()
{
    float p1, p2, Mp;
    printf("Digite a nota da P1: ");
    scanf("%f", &p1);

    printf("\nDigite a nota da P2: ");
    scanf("%f", &p2);

    if (p1 > 10 || p2 > 10 || p1 < 0 || p2 < 0)
    {
        printf("Nenhuma nota pode ser maior que 10 ou ser negativa. ");
        return EXIT_FAILURE;
    }
    Mp = (p1 + (2 * p2)) / 3;
    return Mp;
}

int calc_Me()
{
    int qtd_ex, ex_2pts, ex_1pt, ex_12pts, ex_6pts, hasChallenge;
    float sum_notas;

    printf("--- Parcial dos Exercícios ---\n\n");

    printf("Digite a quantidade TOTAL de exercícios considerando os testes de mesa (e os não entregues): ");
    scanf("%d", &qtd_ex);

    printf("Digite a quantidade de exercícios ENTREGUES no prazo (2pts): ");
    scanf("%d", &ex_2pts);

    printf("Digite a quantidade de exercícios ENTREGUES FORA do prazo (1pt): ");
    scanf("%d", &ex_1pt);

    printf("Já houveram desafios realizados? Digite 1 para sim ou 0 para não: ");
    scanf("%d", &hasChallenge);

    if (hasChallenge == 1)
    {
        printf("Digite a quantidade de desafios ENTREGUES no prazo (12pts): ");
        scanf("%d", &ex_12pts);

        printf("Digite a quantidade de desafios ENTREGUES FORA do prazo (6pts): ");
        scanf("%d", &ex_12pts);

        sum_notas = (ex_2pts * 2) + ex_1pt + (ex_12pts * 12) + (ex_6pts * 6);
        return (sum_notas / qtd_ex) * 5;
    }

    printf("\n 2ptf: %d\n", ex_2pts);
    printf("\n 1ptf: %d\n", ex_1pt);

    sum_notas = (ex_2pts * 2) + ex_1pt;
    printf("\nsoma: %.2f\n", sum_notas);
    printf("\nqtd: %d\n", qtd_ex);
    printf("\nsoma: %.2f\n", sum_notas);

    printf("\n total: %.2f\n", (sum_notas / qtd_ex) * 5);

    return ((sum_notas / qtd_ex) * 5); // multiplica por 5 para fazer a nota maxima passar de 2 para 10
}

float calc_Mf()
{
    float Mp = calc_Mp();
    float Me = calc_Me();
    return (2 * Mp * Me) /( Mp + Me);
}

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(65001);
    int opc;

    printf("\n\n=== Escolha a opção para descobrir sua média final ;) ===\n Basta digitar o número da opção.\n\n");

    // printf("1. Calcular média Parcial dos Exercícios\n");
    // printf("2. Calcular média das provas\n");
    // printf("3. Calcular média final (estimativa)\n\n");
    printf("1. Calcular média final (estimativa)\n\n");

    printf("=== Calculo de nota necessária ===\n\n");

    printf("4. P2 necessária (saber quanto precisa tirar na P2 para atingir média >= 5 | Requisito: Saber nota da P1 e Média dos exercícios\n");
    printf("5. Média exercícios necessarios (saber qual nota precisa ter nos exercícios para atingir média >= 5 | Requisito: Saber nota da P1 e P2\n");
    printf("6. Mínimo possível (qual a média minima em cada item avaliativo.\n");
    printf("7. Nota mínima na recuperacao para fechar com média 5\n\n");

    printf("Opção: ");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        printf("\nMédia dos exercícios %.2f\n", calc_Me());
        break;

    case 2:
        printf("\nMédia das provas %.2f\n", calc_Mp());
        break;

    case 3:
        printf("\nMédia Final: %.2f\n", calc_Mf());
        break;
    }
    return EXIT_SUCCESS;
}
