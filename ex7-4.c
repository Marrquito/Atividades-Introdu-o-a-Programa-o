#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto, cont;

	srand(time(NULL));
	correto = rand() % 100;

    cont = 0;
	palpite = -1;
	while (palpite != correto) {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);

        if (palpite > correto){
            puts("Palpite alto!");
        }else if (palpite < correto){
            puts("Palpite foi baixo!");
        }
        cont++;
	}

    puts("Voce acertou!");
    printf("Voce chutou %d vezes\n", cont);
	return 0;
}