#include <stdio.h>

int verificar_elegibilidade(int idade, float score);

int main() {
  float idade, score;
  int eleg;
  printf("Digite a idade: ");
  scanf("%f", &idade);
  printf("\nDigite o score: ");
  scanf("%f", &score);
  eleg = verificar_elegibilidade(idade, score);
  if (eleg)
    printf("ELEGÍVEL");
  else
    printf("NÃO ELEGÍVEL");
  return 0;
}
  
int verificar_elegibilidade(int idade, float score){
  if(idade >= 18 && score >= 7.5)
    return 1;
  return 0;
}
