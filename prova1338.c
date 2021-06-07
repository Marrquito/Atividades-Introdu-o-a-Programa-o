#include <stdio.h>

void clearBuffer(void){ // função pega no google para limparo buffer do scanf (https://stackoverflow.com/questions/7898215/how-to-clear-input-buffer-in-c)
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main(){
    char mtz[3][3], vencedor; //vencedor para receber o elemento campeão
    int i, fim = 0; // var fim para ajudar na verificação dos elementos

    for(i = 0; i < 3; i++){ // receber os elementos da matriz
        scanf("%c %c %c", &mtz[i][0],  &mtz[i][1],  &mtz[i][2]);
        clearBuffer(); //chamada da função para limpar o buffer
    }

    if(mtz[0][0] == mtz[1][1] && mtz[1][1] == mtz[2][2] || //condição para testar a diagonal da matriz, se a diagonal principal ou a diagonal segundaria for preenchida com elementos iguais
       mtz[0][2] == mtz[1][1] &&  mtz[1][1] == mtz[2][0]){ // a variavel vencedor recebe o elemento ganhador

        vencedor = mtz[1][1];  
        fim = 1; // fim recebe 1 para que nao entre no if a seguir 
    }

    if(fim == 0){ //se as diagonais nao forem vencedoras, fim chega nessa condição valendo 0 e entra na condição
        for(i = 0; i < 3; i++){
            if(mtz[i][0] == mtz[i][1] && mtz[i][1] == mtz[i][2]){ // verifica se as linhas tem algum elemento campeão
                vencedor = mtz[i][0]; // caso encontre um campeao, vencedor armazena esse elemento
                fim = 1; // fim recebe 1 para auxiliar na impressao a seguir
                break; // break para encerrar o laço for
            }else if(mtz[0][i] == mtz[1][i] && mtz[1][i] == mtz[2][i]){ // verifica as colunas para encontrar um elemento campeao do jogo da velha
                vencedor = mtz[0][i]; // caso encontre um campeao, vencedor armazena esse elemento
                fim = 1; // fim recebe 1 para auxiliar na impressao a seguir
                break; // break para encerrar o laço for
            }
        }
    }

    if(fim == 0){ // se a variavel fim chegar com 0 aqui, é porque nenhum elemento foi campeao, logo deu velha
        printf("Velha\n");
    }else{ // se n for 0, será 1
        printf("%c\n", vencedor); // print da variavel vencedor, cujo armazena o elemento campeao
    }

    return 0;
}