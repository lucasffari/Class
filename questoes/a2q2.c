#include <stdio.h>

int main()
{
  float Distancia, Tempo; //dados obtidos pela entrada
  float Velocidade; //dados calculados

  printf("Entre com o valor da distancia (em km): ");
  scanf("%f", &Distancia);
  printf("\nEntre com o valor do tempo (em horas): ");
  scanf("%f", &Tempo);
  
  Velocidade = Distancia / Tempo; //calculo da velocidade media
  
  printf("Velocidade media: %.2f km/h", Velocidade);
  
  return 0;
}
