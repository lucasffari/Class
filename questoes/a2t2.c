#include <stdio.h>
#include <math.h>

int main()
{
  int a,b,c,d,x;
  printf("Entre com os valores de a, b, c, d: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  
  x = pow(a,3) * (b+c) / d;
  
  printf("x = %d", x);
  
  return 0;
}
