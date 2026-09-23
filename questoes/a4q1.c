#include <stdio.h>
int main()
{

  int mat; //setar variaveis usadas
  float not;
  char let;
  
  printf("Digite a matricula: "); //obter dados e instruções
  scanf("%d", &mat);
  printf("\nDigite a nota: ");
  scanf("%f", &not);
  
  if(not >= 9.0) //checar a nota
  {
  let = 'A';
  }
  else if(not >= 8.0)
  {
  let = 'B';
  }
  else if(not >= 6.0)
  {
  let = 'C';
  }
  else if(not >= 3.0)
  {
  let = 'D';
  }
  else
  {
  let = 'E';
  }
  
  printf("\n\nMatricula: %d", mat); //print final
  printf("\nConceito %c", let);
  
  return 0;
}
