#include <stdio.h>

int main(){
  int i = 0;
  float temp, soma = 0, resul;
  
  do{
    printf("Digite um valor: ");
    scanf("%f", &temp);
    soma = soma + temp;
    if(temp != 0)
      i++;
  }while(temp != 0);
  
  if(soma == 0)
    printf("\nNão foi possível calcular MA!");
  else{
  resul = soma / i;
  printf("\nMA = %.2f", resul);}
  
return 0;
}
