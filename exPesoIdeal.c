#include <stdio.h>

int main(){
    char sexo;
    float altura, pesoIdeal;


    printf("----------------------------------------\n");
    printf("               PESO IDEAL               \n");
    printf("----------------------------------------\n");


    printf("Digite \'M\' para homem e \'F\' para Mulher: ");
    sexo = getchar();
    
     
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    if(sexo == 'M'){
        printf("vc eh Homem\n");
        pesoIdeal = (72.7*altura) - 58;
        printf("Por ser homem, seu peso ideal eh: %.2fkg\n", pesoIdeal);

    }else{
        printf("VC eh Mulher\n");
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Por ser Mulher, seu peso ideal eh: %.2fkg\n", pesoIdeal);
    }
    
    return 0;
}