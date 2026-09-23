#include <stdio.h>
int main()
{

  int idade; //setar variaveis usadas
  int tempoC;
  char sexo;
  
  printf("Digite o sexo: "); //obter dados e instruções
  scanf("%c", &sexo);
  printf("\nDigite a idade: ");
  scanf("%d", &idade);
  printf("\nDigite o tempo de contribuição para o INSS: \n");
  scanf("%d", &tempoC);
  
  switch(sexo)
  {
    case 'F': 
      if((idade > 59 && tempoC > 29) || (idade + tempoC) > 89)
        printf("Você pode se aposentar com salário integral");
      else
        printf("Você não pode se aposentar com salário integral");
    break;
    
    case 'M':
      if((idade > 64 && tempoC > 34) || (idade + tempoC) > 99)
        printf("Você pode se aposentar com salário integral");
      else
        printf("Você não pode se aposentar com salário integral");
    break;
      
    default: printf("Sexo deve apenas ser M ou F maiúsculo");
      return 0;
  }
  return 0;
}
