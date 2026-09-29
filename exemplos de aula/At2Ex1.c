#include <stdio.h>
#include <math.h>
int main()
{
    float ca_1, ca_2; //Dados para o calculo
    float hi;
    
    printf("Vamos calcular a hipotenusa OwO \nPrimeiro qual o primeiro cateto:"); //obter dados
    scanf("%f", &ca_1);
    printf("\n E o segundo?:");
    scanf("%f", &ca_2);
    
    hi = sqrt(pow(ca_1, 2) + pow(ca_2, 2)); //calculo da hipotenusa
    
    printf("\nA raiz da soma do quadrado dos catetos é: %2.f", hi); //print
    
    return 0;
}