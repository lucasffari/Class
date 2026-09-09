#include <stdio.h>
#include <math.h>

int main()
{
  int Nascimento, Atual; //dados obtidos pela entrada
  int IdadeAt, IdadeFu; //dados calculados

  printf("Entre com o ano de nascimento: ");
  scanf("%d", &Nascimento);
  printf("\nEntre com o ano atual: ");
  scanf("%d", &Atual);
  
  IdadeAt = Atual - Nascimento; //calculo da idade atual
  IdadeFu = 2036 - Nascimento; //calculo da idade em 2036
  
  printf("Voce tem %d anos", IdadeAt);
  printf("\nEm 2036 voce tera %d anos", IdadeFu);
  
  return 0;
}
