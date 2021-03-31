#include <stdio.h>

int main(){
    float altura, largura, rendimento, volumeLata, latas;
    float areaParede;

    printf("Qual a altura da parede? ");
    scanf("%f", &altura);

    printf("Qual a largura da parede? ");
    scanf("%f", &largura);

    areaParede = altura*largura;
    printf("Sua parede tem area de: %.2f metros quadrados\n", areaParede);

    printf("Quanto rende cada lata de tinta? ");
    scanf("%f", &rendimento);

    printf("Quantos Litros vem em cada lata? ");
    scanf("%f", &volumeLata);

    latas = (volumeLata*areaParede)/rendimento;
    latas = latas/volumeLata;

    printf("Para pintar a parede de %.2f metros quadrados, vc vai precisar de %.1f latas", areaParede, latas);

    return 0;
}
