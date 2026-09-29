#include <stdio.h>
int main()
{
    float a = 10, b = 10, c = 10, d = 10, e = 10;
    float x = (((b+c)/d)+e)*a*a*a;
    printf("a = %d, b = %d, c = %d, e = %d, e = %d \n", (int)a, (int)b, (int)c, (int)d, (int)e);
    printf("x = %0.f", x);
    
    return 0;
}