#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int palpite, certo;

    puts("Bem-vindo ao game!");

    srand(time(NULL));
    certo = rand() % 100;
    printf("certo: %d", certo);
    palpite = -1;
    
    while (palpite != certo){
        puts("Adivinhe o numero que estou pensando...");
        scanf("%d", &palpite);

        if (palpite != certo){
            if(palpite > certo){
                puts("Seu palpite foi alto");
            }else puts("Seu palpite foi baixo.");
        }
    }
    puts("Voce acertou!");
    
    return 0;
}