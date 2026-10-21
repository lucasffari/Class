#include <stdio.h>

void converterDistancias(float metros, float *jardas, float *pes, float *polegadas);

int main() {
    float metros, jd, ft, in;


    printf("Digite o valor em Metros: ");
    scanf("%f", &metros);

    converterDistancias(metros, &jd, &ft, &in);

    printf("\nJardas: %.3f\n", jd);
    printf("\nPés: %.3f\n", ft);
    printf("\nPolegadas: %.3f\n", in);

    return 0;
}

void converterDistancias(float metros, float *jardas, float *pes, float *polegadas) {
    *jardas = metros * 1.094f;
    *pes = metros * 3.281f;
    *polegadas = metros * 39.3701f;
}

