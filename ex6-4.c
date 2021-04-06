#include <stdio.h>

int main(){
    int valores, cont;
    float media;

    printf("Digite valores p/ fazer a media (digite 0 para parar de inserir): ");

    media = 0;
    cont = 0;
    valores = -1;
    while (valores != 0){
        printf("Digite um valor ou 0 p/ sair: \n");
        scanf("%d", &valores);
        media = media + valores;    
        cont++;
    }
    cont--;
    printf("Soma dos valores digitados: %.0f\n", media);
    media = media / cont;
    printf("Numero de valores digitados: %d\n", cont);
    printf("Media dos valores: %.2f\n", media);

    return 0;
}