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
//#include <windows.h>

#define RESET   "\x1b[0m"
#define NEGRITO "\x1b[1m"

// Cores de texto
#define VERMELHO "\x1b[31m"
#define VERDE    "\x1b[32m"
#define AMARELO  "\x1b[33m"
#define AZUL     "\x1b[34m"
#define ROXO     "\x1b[35m"
#define CIANO    "\x1b[36m"


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

float calc_Me()
{
    float qtd_ex, ex_2pts, ex_1pt, ex_12pts, ex_6pts, hasChallenge;
    float sum_notas;

    printf( "ROXO" "PARCIAL DOS EXERCÍCIOS" RESET "\n\n");

    printf("Digite a quantidade TOTAL de exercícios considerando os testes de mesa (e os não entregues): ");
    scanf("%f", &qtd_ex);

    printf("Digite a quantidade de exercícios ENTREGUES no prazo (2pts): ");
    scanf("%f", &ex_2pts);

    printf("Digite a quantidade de exercícios ENTREGUES FORA do prazo (1pt): ");
    scanf("%f", &ex_1pt);

    printf("Já houveram desafios realizados? Digite 1 para sim ou 0 para não: ");
    scanf("%f", &hasChallenge);

    if (hasChallenge == 1)
    {
        printf("Digite a quantidade de desafios ENTREGUES no prazo (12pts): ");
        scanf("%f", &ex_12pts);

        printf("Digite a quantidade de desafios ENTREGUES FORA do prazo (6pts): ");
        scanf("%f", &ex_6pts);

        sum_notas = (ex_2pts * 2) + ex_1pt + (ex_12pts * 12) + (ex_6pts * 6);
        return (sum_notas / qtd_ex) * 5;
    }
    
    sum_notas = (ex_2pts * 2) + ex_1pt;
    return ((sum_notas / qtd_ex) * 5); // multiplica por 5 para fazer a nota maxima passar de 2 para 10
}

float calc_Mf(float Mp, float Me)
{
    return (2 * Mp * Me) /( Mp + Me);
}

int main()
{
    setlocale(LC_ALL, "pt-BR");
    // SetConsoleOutputCP(65001);
    int opc;
    int temp_Mp = 0, temp_Me = 0, temp_Mf = 0;
    float Mp = 0, Me = 0, Mf = 0;

    do
    {
        printf("┌───────────────────────────────────────┐\n");
        printf("│ " ROXO "CATEGORIA" RESET "            | NOTA           │\n");
        printf("├───────────────────────────────────────┤\n");

        if (temp_Me)
            printf("│ " AZUL "Média Exercicios (ME)" RESET " | %.2f          │\n", Me);
        if (temp_Mp)
            printf("│ " AZUL "Média Provas (Mp)" RESET "     | %.2f         │\n", Mp);
        if (temp_Mf)
            printf("│ " AZUL "Média Final (Mf)" RESET "      | %.2f          │\n", Mf);

        if (!temp_Me && !temp_Mp && !temp_Mf)
            printf("│ Nenhuma nota calculada ainda...       │\n");

        printf("└───────────────────────────────────────┘\n");

        // if (temp_Me)
        //     printf("Me = %.2f\n", Me);
        // if (temp_Mp)
        //     printf("Mp = %.2f\n", Mp);
        // if (temp_Mf)
        //     printf("Mf = %.2f\n", Mf);
        // if (!temp_Me && !temp_Mp && !temp_Mf)
        //     printf("Nenhuma nota calculada ainda.\n");

        printf("\n\n" ROXO "CALCULO DE MÉDIA FINAL " RESET "\n Basta digitar o número da opção.\n\n");


        printf("1. Calcular média Parcial dos Exercícios\n");
        printf("2. Calcular média das provas\n");
        printf("3. Calcular média final (estimativa)\n\n");

        printf("" ROXO "CALCULO DE NOTA NECESSÁRIA " RESET "\nBasta digitar o número da opção e cumprir os requisitos.\n\n");
        printf("Para saber quanto precisa tirar em cada item avaliativo para atingir média >= 5, você precisa ter a nota de pelo menos um item avaliativo.\n\n");

        printf("4. Nota necessária na P2 "AMARELO"Requisito: "RESET"Saber nota da P1 e Média dos exercícios\n");
        printf("5. Nota necessária nos exercícios "AMARELO"Requisito: "RESET" Saber nota da P1 e P2\n");
        printf("6. Mínimo possível (qual a média minima em cada item avaliativo.\n");
        printf("7. Nota mínima na recuperacao para fechar com média 5\n");
        printf("0. Sair\n\n");

        printf("Opção: ");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            Me = calc_Me();
            temp_Me = 1;
            temp_Mf = 0;
            printf("\nMédia dos exercícios %.2f\n", Me);
            break;

        case 2:
            Mp = calc_Mp();
            temp_Mp = 1;
            temp_Mf = 0;
            printf("\nMédia das provas %.2f\n", Mp);
            break;

        case 3:
            if (!temp_Mp)
            {
                Mp = calc_Mp();
                temp_Mp = 1;
            }

            if (!temp_Me)
            {
                printf("Digite a média dos exercícios: ");
                scanf("%f", &Me);
                temp_Me = 1;
            }

            Mf = calc_Mf(Mp, Me);
            temp_Mf = 1;
            printf("\nMédia Final: %.2f\n", Mf);
            break;

        case 0:
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    }
    while (opc != 0);

    return EXIT_SUCCESS;
}

