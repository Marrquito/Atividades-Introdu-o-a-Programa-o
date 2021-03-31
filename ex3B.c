#include <stdio.h>

int main(){
    float peso, altura, imc;

    printf("----------------------------------------\n");
    printf("              SEU IMC                   \n");
    printf("----------------------------------------\n");

    printf("Informe o seu peso: ");
    scanf("%f", &peso);

    printf("Informe a sua altura: ");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);

    printf("Seu IMC eh: %.2f\n", imc);

    return 0;
}