#include <stdio.h>
int quadrado_por_soma(int n);

int main(){
  printf("Digite um número: ");
  int num, resul;
  scanf("%d", &num);
  resul = quadrado_por_soma(num);
  printf("O quadrado de %d é %d", num, resul);
  return 0;
}

int quadrado_por_soma(int n){
  int i = 1, impar = 1, resul = 0;
  while(impar <= n){
    resul = resul + i;
    i += 2;
    impar++;}
  return resul;
}

