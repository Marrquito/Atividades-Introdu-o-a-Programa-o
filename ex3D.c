#include <stdio.h>

int main(){
    float m1, m2, m3, m4, mGeral;

    printf("----------------------------------------\n");
    printf("          MEDIA DO BIMESTRE             \n");
    printf("----------------------------------------\n");


    printf("Digite sua media do primeiro bimestre: ");
    scanf("%f", &m1);
    printf("Digite sua media do segundo bimestre: ");
    scanf("%f", &m2);
    printf("Digite sua media do terceiro bimestre: ");
    scanf("%f", &m3);
    printf("Digite sua media do quarto bimestre: ");
    scanf("%f", &m4);

    mGeral = ((m1 * 1) + (m2 * 2) + (m3 * 3) + (m4 * 4)) / 10;

    printf("Sua media geral foi: %.2f\n", mGeral);

    return 0;
}