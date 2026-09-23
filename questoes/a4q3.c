#include <stdio.h>
#include <math.h>

float dode(float lado);

int main()
{
  float lado, area;
  printf("Digite o lado do dodecaedro regular: ");
  scanf("%f", &lado);
  area = dode(lado);
  printf("A area e: %.2f", area);
  return 0;
}

float dode(float lado)
{
  float area;
  area = 3 * pow(lado, 2) * sqrt(25 + 10 * sqrt(5));
  return area;
}
