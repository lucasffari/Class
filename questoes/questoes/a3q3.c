#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int po1, po2, Ma, Me;
  
  printf("Digite as duas pontuações: ");
  scanf("%d %d", &po1, &po2);

  if(po1>po2)
    {Ma = po1;
    Me = po2;}
  else
    {Ma = po2;
    Me = po1;}

  printf("\nA pontuação %d é maior e %d a menor.", Ma, Me);
  return 0;
}
