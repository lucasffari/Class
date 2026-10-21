#include <stdio.h>
int main()
{
  int i = 0, x, x2 = 0, y = 0;
  char n;
  printf("Letra: ");
  scanf("%c", &n);
  printf("N: ");
  scanf("%d", &x);
  if(x == 1){
    printf("%c", n);
    return 0;
  }
  while(i != x){
    printf("%c", n);
    i++;
  }
  printf("\n");
  while(y != x-2){
    printf("%c", n);
    while(x2 != x-2){
      printf(" ");
      x2++;
      }
    printf("%c\n", n);
    x2 = 0;
    y++;
  }
  i = 0;
  while(i != x){
   printf("%c", n);
   i++;
  }
return 0;
}