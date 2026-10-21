#include <stdio.h>
int main(){
  int num, i, resu = 0;
  printf("Digite um número: ");
  scanf("%d", &num);
  i = num;
  while(i != 0){
  if(num%i == 0)
    resu++;
  i--;
  }
  if(resu == 2)
    printf("%d é um número primo!", num);
  else
    printf("%d não é um número primo!", num);
return 0;
}
