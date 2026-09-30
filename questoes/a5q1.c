#include <stdio.h>
#define pi 3.1415

void grau();
void tempe();

int main() {

  int opcao;
  float final;
  printf("### CONVERSOR DE UNIDADES ###\n\n");
  printf("1) Angulo\n2) Temperatura");
  printf("\n\nDigite uma opcao: ");
  scanf("%d", &opcao);
  switch(opcao){
    case 1:
      grau();
      break;
    case 2:
      tempe();
      break;
  }
  
return 0;
}

void grau(float *final){
  
  int ordem;
  float inicial;
  
  printf("\n\nQual a unidade de origem?\n\n1) Graus\n2) Radianos");
  printf("\n\nSelecione uma opcao: ");
  scanf("%d", &ordem);
  switch(ordem){
    case 1:
      printf("Digite o valor em Graus: ");
      scanf("%f", &inicial);
      *final = (inicial / 180) * pi;
      printf("Valor em Radianos: %.2f", *final);
      return;
    case 2:
      printf("Digite o valor em Radianos: ");
      scanf("%f", &inicial);
      *final = (inicial * 180) / pi;
      printf("Valor em Graus: %.2f", *final);
      return;
      }
}
    
void tempe(){
  
  int origem;
  float C, F, K;
  
  printf("\n\nQual a unidade de origem?\n\n1) Celsius\n2) Fahrenheit\n3) Kelvin");
  printf("\n\nSelecione uma opcao: ");
  scanf("%d", &origem);
  switch(origem){
    case 1:
      printf("Digite o valor em Celsius: ");
      scanf("%f", &C);
      K = C + 273.15;
      F = (C*1.8) + 32;
      printf("Valor em Fahrenheit: %.2f\n", F);
      printf("Valor em Kelvin: %.2f\n", K);
      return;
    case 2:
      printf("Digite o valor em Fahrenheit: ");
      scanf("%f", &F);
      C = (F - 32) / 1.8;
      K = C + 273.15;
      printf("Valor em Celsius: %.2f\n", F);
      printf("Valor em Kelvin: %.2f\n", K);
      return;
    case 3:
      printf("Digite o valor em Kelvin: ");
      scanf("%f", &C);
      C = K - 273.15;
      F = (C*1.8) + 32;
      printf("Valor em Fahrenheit: %.2f\n", F);
      printf("Valor em Celsius: %.2f\n", K);
      return;
    }
}       
