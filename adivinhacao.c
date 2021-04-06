#include <stdio.h>

int main(){
    int palpite;

    puts("Bem-vindo ao game!");


    while (palpite != 5){
        puts("Adivinhe o numero que estou pensando...");
        scanf("%d", &palpite);

        if (palpite == 5){
            puts("Voce acertou!");
        }else {
            printf("Voce errou. ");
            if(palpite > 5){
                puts("Seu palpite foi alto");
            }else puts("Seu palpite foi baixo.");
        }
    }
    
    return 0;
}