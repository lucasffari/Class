#include <stdio.h>
#include <math.h>

void temperatura(float *, float *, float *);

int main()
{
    float C;
    float F;
    float K; 
    
    printf("Digite o valor em Celsius: ");
    scanf("%f", &C);
    
    temperatura(&C, &F, &K);
    
    printf("\nFahrenheit: %.2f Kelvin: %.2f", F, K);

    return 0;
}

void temperatura(float *pC, float *pF, float *pK){
    
    *pK = *pC + 273.15;
    *pF = (*pC * 1.8) + 32;
    return;
}
