#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto, cont;

	srand(time(NULL));
	correto = rand() % 100;

    cont = 1;
	palpite = -1;

    printf("Voce tem 5 tentativas para acertas o numero!\n\n");
	while (palpite != correto) {
        if(cont != 6){
            printf("Adivinhe o numero: ");
            scanf("%d", &palpite);

            if (palpite > correto){
                puts("Palpite alto!");
            }else if (palpite < correto){
                puts("Palpite foi baixo!");
            }
            printf("Tentativa numero: %d\n\n", cont);
        }else{
            puts("Numero de tentativas excedida =( ");
            puts("Voce perdeu! ");
            return 0;
        }
        cont++;
	}

    puts("Voce acertou!");
    printf("Voce chutou %d vezes\n", cont -1);
	return 0;
}