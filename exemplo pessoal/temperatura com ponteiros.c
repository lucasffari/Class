#include <stdio.h>
#include <math.h>

void temperatura(float *, float *, float *);

int main()
{
    float C;
    float F;
    float K; 
    
    printf("Insira a temperatura: ");
    scanf("%f", &C);
    
    temperatura(&C, &F, &K);
    
    printf("\nA temperatura %.2f Celcius é %.2f Fahrenheit, %.2f Kelvin!", C, F, K);

    return 0;
}

void temperatura(float *pC, float *pF, float *pK){
    
    *pK = *pC + 273.15;
    *pF = (*pC * 1.8) + 32;
    return;
}
