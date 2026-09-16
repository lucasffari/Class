#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int faces;
  int resultado;
  int resultado2 = 1;
  
  printf("--- Simulador de Dados RPG ---");
  printf("\nQuantas faces tem o dado que você quer rolar? ");
  scanf("%d", &faces);
  
  srand(1); //inicializa a semente baseada no horario do computador
  resultado = rand() % faces;
  resultado2 += resultado;
  
  printf("Resultado do dado: %d", resultado2);
  return 0;
}
