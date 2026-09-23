#include <stdio.h>
#include <math.h>

int main(){

  float preco, resultado;
  char condicao;

  printf("Digite o preço do produto: ");
  scanf("%f", &preco);
  printf("\nDigite a condição de pagamento: "); //problema aqui
  scanf(" %c", &condicao);
  
  switch(condicao){
    case '1': resultado = preco * 0.9; break;
    case '2': resultado = preco * 0.95; break;
    case '3': resultado = preco; break;
    case '4': resultado = preco * 1.1; break;} 
  printf("O valor final do seu produto sera: R$ %.2f", resultado);
}