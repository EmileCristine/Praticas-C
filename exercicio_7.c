
#include <stdio.h>
#include <math.h>

int main()
{
  int h1, h2, m1, m2;
  
  printf("Digite o primeiro horario no seguinte formato: HH:MM\n");
  scanf("%d:%d", &h1, &m1);
  
  if (h1<0 || h1>23 || m1<0 || m1>59) {
    printf("Horário inválido, tente novamente!\n");
    scanf("%d:%d", &h1, &m1);
  } else {
    printf("Digite o segundo horario no seguinte formato: HH:MM\n");
    scanf("%d:%d", &h2, &m2);
  } 
    if (h2<0 || h2>23 || m2<0 || m2>59) {
      printf("Horário inválido, tente novamente!\n");
      scanf("%d:%d", &h2, &m2);    
  }
  
  h1= (h1 * 60) + m1;
  h2 = (h2 * 60) + m2;
  
  int intervalo = h2 - h1;
  
  int interH = intervalo/60;
  int interM = intervalo%60;

    const char* uniMedida;
    // direfente de char uniMedida, essa declaração permitirá guardar mais de 1 caractere
    // char* significa exatamente "ponteiro para caractere" (character pointer). 
    // em vez de guardar uma letra ou um texto diretamente, guarda o endereço de memória onde
    // a primeira letra do texto está guardada.

    switch (interH) {
        case 0: 
            if (interM == 1) {
                uniMedida = "minuto";
            } else {
                uniMedida = "minutos";
            }
            break;
            
        case 1: 
            uniMedida = "hora";
            break;
            
        default:
            uniMedida = "horas";
            break;
    }

  printf("O intervalo entre os horarios eh: %d minuto(s)\n", intervalo);
  printf("%02d:%02d %s\n", interH, interM, uniMedida);
  return 0;
}
