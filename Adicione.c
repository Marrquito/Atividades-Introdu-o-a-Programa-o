#include <stdio.h>

double AdicioneNaMedia(double valor){
    static double nums;
    static int qtd;

    nums += valor; 
    qtd++;

    return nums / qtd;
}


int main(){
    double valor, media;
    int qtd, j;
    printf("----------------------------------------\n");
    printf("               SUAS MEDIAS              \n");
    printf("----------------------------------------\n");

    printf("\tQuantos valores serao inseridos? ");
    scanf("%d", &qtd);
   
    int i = 1;
    while(qtd--){

        printf("Digite o %d valor: ", i);
    
        scanf("%lf", &valor);
        media = AdicioneNaMedia(valor);
        printf("\tMedia: %.1lf\n\n", media);           
        i++;
    }

    return 0;
}