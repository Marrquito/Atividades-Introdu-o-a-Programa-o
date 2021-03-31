#include <stdio.h>
#include <math.h>

int main(){
    float diametro, raio, area, pi, perimetro;
    pi = 3.14;

    printf("----------------------------------------\n");
    printf("            CIRCUNFERENCIA              \n");
    printf("----------------------------------------\n");


    printf("Digite o valor do diametro: ");
    scanf("%f", &diametro);

    raio = diametro / 2;
    area = pi * pow(raio, 2);
    perimetro = 2 * pi * raio;

    printf("O raio da sua circunferencia eh: %.2f\n", raio);
    printf("A area da sua circunferencia eh: %.2f\n", area);
    printf("O Perimetro da sua circunferencia eh: %.2f\n", perimetro);


    return 0;
}