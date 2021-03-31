#include <stdio.h>

int main(){
    float peso, altura, imc;

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    imc = peso / (pow(altura, 2));
    printf("IMC = %.1f\n", imc);

    if (imc <= 18.5){
        printf("Peso baixo, precisa comer mais!");
    }else if(imc >= 18.5 && imc <= 25){
        printf("Voce esta normal!");
    }else if (imc > 25.5 && imc <=30){
        printf("Pouco gordinho, coma menos!");
    }else{
        printf("Voce esta muito gordo, coma muito menos!");
    }       
    
    return 0;
}