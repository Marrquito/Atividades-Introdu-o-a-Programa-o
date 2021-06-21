#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int i, j;
    int linha, coluna;
    char baralho[157];
    int matriz[4][13] = {0};
    int erro, cartasEncontradas;

    scanf("%s", baralho);

    for(i = 0; baralho[i] != '\0'; i += 3){

        if(baralho[i+2] == 'C')
            linha = 0;
        else if(baralho[i+2] == 'E')
            linha = 1;
        else if(baralho[i+2] == 'U')
            linha = 2;
        else if(baralho[i+2] == 'P')
            linha = 3;

        coluna = atoi(&baralho[i]) - 1;
        matriz[linha][coluna]++;
    }

    for(i = 0; i < 4; i++){
        erro = 0;
        cartasEncontradas = 0;

        for(j = 0; j < 13; j++){
            if(matriz[i][j] == 1){
                cartasEncontradas++;
            }
            else if(matriz[i][j] > 1){
                erro = 1;
                break;
            }
        }

        if(erro)
            printf("erro\n");
        else
            printf("%d\n", 13-cartasEncontradas);
    }

    return 0;
}