#include <stdio.h>
#include <math.h>

int raizes(float *x1, float *x2, float a, float b, float c);

int main(){
  int funcao;
  float x1,x2,a,b,c;
  printf("Digite os valores de a, b , c:\n");
  scanf("%f%f%f", &a, &b, &c);
  funcao = raizes(&x1, &x2, a, b, c);
  if(funcao != 0){
    printf("Não foi possível calcular as raízes!");
    return 0;}
  printf("xa = %.2f\nxb = %.2f", x1, x2);
  return 0;
}

int raizes(float *x1, float *x2, float a, float b, float c){
  float delta;
  delta = (b*b)-(4*a*c);
  if(delta < 0)
    return 1;
  *x1 = (-b + sqrt(delta)) / (2*a);
  *x2 = (-b - sqrt(delta)) / (2*a);
  return 0;
}
