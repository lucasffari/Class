#include<stdio.h>
#include<stdlib.h>

int divi(int num1, int num2, int *resultado, int *sobra){
    
    if(num2 == 0)
        return 1;
    else{    
        *resultado = num1 / num2;
        *sobra = num1 % num2;
        return 0;
    }    
    
}    


int main()
{
    int num1, num2, resultado, sobra, erro = 0;
    
    printf("insira o divisor: ");
    scanf("%d", &num1);
    printf("insira o dividendo: ");
    scanf("%d", &num2);
    
    erro = divi(num1, num2, &resultado, &sobra);
    
    if(erro){
        printf("\nerro, resultado indefinido, divisão por zero");
        return 1;
    }
    printf("\no resultado da divisao é: %d, com resto: %d", resultado, sobra);
    return 0;
}