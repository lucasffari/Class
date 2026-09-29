#include <stdio.h>
#include <math.h>
int main()
{
    double x1, y1, x2, y2; //Dados para o calculo
    double di;
    
    printf("distancia entre pontos, escreva as coordenadas de x1 y1"); //obter dados
    scanf("%lf", &x1);
    scanf("%lf", &y1);
    printf("\n agora as coordenadas de x2 y2:");
    scanf("%lf", &x2);
    scanf("%lf", &y2);
    
    double x3 = x1 - x2;
    double y3 = y1 - y2;
    di = sqrt(pow(x3, 2) + pow(y3, 2)); //calculo da distancia
    
    printf("\nA distancia entre os pontos: %lf", di); //print
    
    return 0;
} 