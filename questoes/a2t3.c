#include <stdio.h>

int main()
{
  int Hora, Minuto, Segundo;
  printf("Digite a hora, minutos e segundos: ");
  scanf("%d %d %d", &Hora, &Minuto, &Segundo);
  
  Minuto = Minuto + Hora*60;
  Segundo = Segundo + Minuto*60;
  
  printf("Total = %d", Segundo);
  
  return 0;
}
