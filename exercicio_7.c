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
    
    if (h2<0 || h2>23 || m2<0 || m2>59) {
      printf("Horário inválido, tente novamente!\n");
      scanf("%d:%d", &h2, &m2);    
    } else {
      if (m1 > m2) {
        m1 = 60 - m1;
      }
    }
  }
  
  int interH = h2 - h1;
  int interM = m2 - m1;
  
  printf("O intervalo entre os horarios eh: %d:%d\n", interH, interM);
}