#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c; //Variaveis base
    float y1, y2, yt; //Variaveis de calculo
    
    printf("Insira um valor para: \n a:"); //inserir valor
    scanf("%f", &a);
    printf("\n b:");
    scanf("%f", &b);
    printf("\n c:");
    scanf("%f", &c);
    
    y1 = pow(a + 3, 4); //calculo primeira metade
    y2 = pow(b * c, 3); //calculo segunda metade
    yt = y1 + y2;
    
    printf("a = %d, b = %d, c = %d\n", (int)a, (int)b, (int)c); //print na tela
    printf("y = %0.f", yt);
    
    return 0;
}