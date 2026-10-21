#include <stdio.h>

long int fat(int n);

int main(){
  int num; long int resul;
  printf("Digite o valor de n: ");
  scanf("%d", &num);
  if(num == 0)
  {
    printf("0! = 1");
    return 0;
  }
  resul = fat(num);
  printf("%d! = %ld", num, resul);
return 0;}

long int fat(int n){
  long int resul = n;
  for(int i = n-1; i >= 1; i--)
  {
    resul = resul * i;
  }
return resul;
}
  
