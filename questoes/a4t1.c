#include <stdio.h>
int main()
{

  int idade, tempoC, flag = 0;
  char sexo;
  
  printf("Digite o sexo: "); //obter dados e instruções
  scanf("%c", &sexo);
  printf("\nDigite a idade: ");
  scanf("%d", &idade);
  printf("\nDigite o tempo de contribuição para o INSS: \n");
  scanf("%d", &tempoC);
  
  if(sexo = F)
      if((idade > 59 && tempoC > 29) || (idade + tempoC) > 89)
      flag = 1;
  else
      if((idade > 64 && tempoC > 34) || (idade + tempoC) > 99)
      flag = 1;   
      
  if(flag)
    printf("Você pode se aposentar com salário integral");
  else
    printf("Você não pode se aposentar com salário integral");
    
  return 0;
}
