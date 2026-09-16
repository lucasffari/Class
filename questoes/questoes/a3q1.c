#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  double dh, al, dr;
  
  printf("Digite a distancia horizontal do drone (em metros): ");
  scanf("%lf", &dh);
  printf("\nDigite a altitude do drone (em metros): ");
  scanf("%lf", &al);
  
  dr = sqrt(pow(dh, 2)+pow(al, 2));
  
  printf("\n\nA distância em linha reta do drone até a base é: %.2lf m", dr);
  return 0;
}
