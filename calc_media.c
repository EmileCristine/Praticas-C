// calcula a media final da materia utilizando a formula indicada pelo professor responsável.
// formula: Mf = 2 * Mp * Me / Mp + Me
// Mp = P1 + 2P2 / 3

// ATENÇÃO: ainda não é possivel descobrir como a média dos exercicio é calculada pois alguns valem 2 pontos e os desafios 12 (e tem mais de 30 exercicios em apenas metade do semestre)

// ADAPTAÇÃO: o aluno poderá verificar quanto ainda precisa tirar para passar na matéria (media 5)
// FEATURE FUTURA: A nota da recuperação também tem uma formula propria, a feat futura permitirá que o estudante saiba quanto precisa tirar na recuperação para passar.

#include <stdio.h>

float calc_Mp (float p1, float p2) {
    return (p1 + (2 * p2)) / 3;
}

float calc_Me () {
    int qtd_ex, ex_2pts, ex_1pt, ex_12pts, ex_6pts;

    printf("--- Parcial dos Exercícios ---");

    printf("Digite a quantidade total de exercicios considerando os testes de mesa: \n");
    scanf("%d", qtd_ex);

    printf("Digite a quantidade de exercicios entregues no prazo (2pts): \n");
    scanf("%d", &ex_2pts);

    printf("Digite a quantidade de exercicios entregues fora do prazo (1pt): \n");
    scanf("%d", &ex_1pt);

    printf("Digite a quantidade de desafios entregues no prazo (12pts): \n");
    scanf("%d", &ex_12pts);

    printf("Digite a quantidade de desafios entregues fora do prazo (6pts): \n");

    Me = ((ex_2pts + ex_1pt + ex_12pts + ex_6pts) * 100) / qtd_ex;
}

float calcular mp_necessario (float Mp);

int main () {
    float p1, p2, Me, Mf, Mp;

    // Menu de opções

    // 1 opc - O usuário já sabe a nota de tudo e apenas quer saber sua nota final
    // 2 opc - O usuário tem apenas a nota da P1 -> com isso ficam 2 icognitas, p2 e exercicio
    // 3 opc - O usuário tem apenas as notas das provas -> com isso ficam apenas os exercicios de icognita
    // 4 opc - O usuário tem apenas a nota dos exercicios -> com isso tem-se 2 icognitas
    // 5 opc - O usuário tem apenas exercicios e p1
    // 6 opc - O usuário tem apenas a exercicios e p2

    // media parcial opcional dos exercicios
    // inserir a qtd e considerar que por estarem funcionando valha 10 pontos, entrega com atraso 5 e n entrega 0 (opcoes que o aluno pode escolher colocar)

    // se um exercicio de 12 vale uns 6 exercicios, ent posso considerar a nota deles 5x maior mesmo e para a media eu calculo a porcentagem que representam perante a 10

    // 10 == 1000%
    // 2 = 100%
    // 1 = 50
    // 0.5 = 25%

    printf("=== Escolha a opção para descobrir sua média final ;) ===\n Basta digitar o numero da opcao.");

    printf("1. Calcular media Parcial dos Exercicios");
    printf("2. Calcular media das provas")

    switch (opc) {
        case 1:
            calc_Mp();
            break;
        case 2:
            calc_Me();
            break;
        default:
            break;
    }






    // isso calcula apenas a media final
    printf("Digite a nota da P1 e P2: \n");
    scanf("%f %f", &p1, &p2);

    if(p1 > 10 || p2 > 10 || p1 < 0 || p2 < 0) {
        printf("Nenhuma nota pode ser maior que 10 ou ser negativa. ");
        return 0;
    }

    Mp = calc_Mp(p1, p2);
    Mf = (2.0 * Mp * Me) / (Mp + Me);

    printf("Media dos exercicios %.2f\n", Me);
    printf("Media das provas %.2f\n", Mp);
    printf("Media Final: %.2f\n", Mf);

    return 0;
}