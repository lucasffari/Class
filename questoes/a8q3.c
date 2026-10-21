#include <stdio.h>

int main(){
  float n1, n2, media;
  
  printf("Digite as notas do aluno: ");
  scanf("%f %f", &n1, &n2);
  while(n1 >= 0 && n2 >= 0){
  media = (n1 + n2)/2;
  printf("A média das notas é %.1f", media);
  printf("\nDigite as notas do aluno: ");
  scanf("%f %f", &n1, &n2);}
  return 0;
}
