#include <stdio.h>
void divisores(int num);

int main(){
  printf("Digite o valor de n: ");
  int num;
  scanf("%d", &num);
  divisores(num);
  return 0;
}

void divisores(int num){
  int i = 1;
  printf("Os divisores de %d são:", num);
  while(i <= num){
    if(num % i == 0)
      printf(" %d", i);
    i++;
  }
}
