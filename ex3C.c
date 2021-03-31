#include <stdio.h>

int main(){
    int b, h;
    float area;

    printf("----------------------------------------\n");
    printf("            AREA DO TRINANGULO          \n");
    printf("----------------------------------------\n");


    printf("Informe a base do triangulo: ");
    scanf("%d", &b);
    printf("Informe a altura do triangulo: ");
    scanf("%d", &h);

    area = (b * h) / 2.0;

    printf("A area do seu triangulo eh: %.2f\n", area);


    return 0;
}